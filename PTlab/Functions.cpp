#include "stdafx.h"

RandValue::RandValue(double _m, double _d, int _n, int _numExp, int _z, int _k) {
	m = _m;
	d = _d;
	n = _n;
	z = _z + 1;
    k = _k + 1;
	numExp = _numExp;
	expN = n * m;
	varN = n * d;
	expCalc = 0;
	varCalc = 0;
	meanCalc = 0;
	rangeCalc = 0;
    D = 0;
    ni = 0;
    R0 = 0;
	lambda = sqrt(1 / d);
	offset = m - sqrt(d);
	//meanN = n*(offset + log(2) / lambda);
	E = new double[numExp];
	segments = new double[z];
    f = new double[z];
    boundaries = new double[k];
}

RandValue::~RandValue() {
	delete[] E;
	delete[] segments;
}


double RandValue::inverseF(double p) {
	return offset - std::log(1 - p) / lambda;
}

void RandValue::expectation() {
	for (int i = 0; i < numExp; i++)
		expCalc += E[i];
	expCalc /= numExp;
}

void RandValue::variance() {
	for (int i = 0; i < numExp; i++)
		varCalc += (E[i] - expCalc)*(E[i] - expCalc);
	varCalc /= numExp;
}

void RandValue::mean() {
	if (numExp % 2 == 0)
		meanCalc = (E[numExp/ 2] + E[(numExp-1) / 2 ]) / 2;
	else
		meanCalc = E[numExp / 2];
}

void RandValue::range() {
	rangeCalc = E[numExp - 1] - E[0];
}


void RandValue::experiment() {
	double p = 0;
	double sum = 0;
	std::srand((unsigned)time(NULL));
	for (int i = 0; i < numExp; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			int tmp = std::rand();
			p = tmp / static_cast<double>(RAND_MAX+1); // + 1
			sum += inverseF(p);
		}
		E[i] = sum;
	}

	std::sort(E, E + numExp);
	expectation();
	variance();
	mean();
	range();
    calcSegments();
    calcD();
    calcBoundaries();
    calcR0();
}

double RandValue::densityOne(double x) {
    if (x >= offset) {
        return 1/lambda * exp(-lambda * (x - offset));
    }
    else {
        return 0;
    }
}
double RandValue::density(double x) {
    if (n != 1) {
        double pi = 3.14159265358979323846;
        double a = 1 / sqrt(2 * pi*varN);
        double pow = (x - expN)*(x - expN) / (2 * varN);
        return a * exp(-pow);
    }
    else {
        return densityOne(x);
    }
}

double RandValue::distFuncOne(double x) {
    if (x >= offset) {
        return (1 - exp(-lambda * (x - offset)));
    }
    else {
        return 0;
    }
}
double RandValue::distFunc(double x) {
    if (n != 1) {
        double p = (x - expN) / sqrt(2 * varN);
        return 0.5*(1 + erf(p));
    }
    else {
        return distFuncOne(x);
    }
}

void RandValue::setSegments(double* _segments, int _z) {
	delete[] segments;
	z = _z;
	segments = new double[z];
	for (int i = 0; i < z; i++)
		segments[i] = _segments[i];
    delete[] f;
    f = new double[z - 1];
}

void RandValue::setZ(int _z) {
    delete[] segments;
    z = _z;
    segments = new double[z];
    delete[] f;
    f = new double[z-1];
}

void RandValue::calcSegments() {
    for (int i = 0; i < z; i++) {
        segments[i] = E[0] + i * rangeCalc / (z - 1);
    }
}

void RandValue::setBoundaries(double* _segments, int _z) {
	delete[] boundaries;;
	z = _z;
    boundaries = new double[k];
	for (int i = 0; i < k; i++)
        boundaries[i] = _segments[i];
}

void RandValue::setK(int _k) {
    delete[] boundaries;
    k = _k;
    boundaries = new double[k];
}

void RandValue::calcBoundaries() {
    for (int i = 1; i < k-1; i++) {
        boundaries[i] = E[0] + i * rangeCalc / (k - 2);
    }
    boundaries[0] = -INFINITY;
    boundaries[k - 1] = INFINITY;
}

void RandValue::calcR0() {
    double q = 0;
    int *nj = new int[k];
    nj[0] = 0;
    for (int i = 1; i < k; i++) {
        nj[i - 1] = 0;
        for (int j = 0; j < numExp; j++) {
            if (E[j] >= boundaries[i - 1] && E[j] < boundaries[i])
                nj[i - 1]++;
        }
    }
    R0 = 0;
    for (int i = 1; i < k; i++) {
        q = distFunc(boundaries[i]) - distFunc(boundaries[i - 1]);
        R0 += (nj[i-1] - q * numExp)*(nj[i-1] - q * numExp) / (numExp*q);
    }
    delete[] nj;
}

void RandValue::calcD() {
    double D1 = 0, D2 = 0;
    for (int i = 1; i < numExp; i++) {
        D1 = abs(i / static_cast<double>(numExp) - distFunc(E[i] + 0.000001));
        D2 = abs(distFunc(E[i]) - (i - 1) / static_cast<double>(numExp));
        if (D1 > D2 && D1 > D)
            D = D1;
        else
            if (D2 > D1 && D2 > D)
                D = D2;
    }
}

void RandValue::histogram(double *_f) {
	for (int i = 0; i < z; i++) {
		f[i] = _f[i];
	}
}

double RandValue::chiSquare(double r, double x) {
    if (x > 0)
        return std::pow(x, r / 2 - 1)*exp(-x / 2) / tgamma(r / 2) / std::pow(2, r / 2);
    else
        return 0;

}

double  RandValue::FR0(double r, double x) {
    int n = (int)(x * 1000);
    double h = x / n;
    double res = 0;
    for (int i = 0; i < n; i++)
        res += (chiSquare(r, i*h) + chiSquare(r, (i + 1)*h))*h / 2;
    return 1 - res;
}
System::Void clearGraph(ZedGraph::ZedGraphControl^ canvas) {
    if (canvas->GraphPane->CurveList->Count > 0)
    {
        canvas->GraphPane->CurveList->Clear();
        canvas->AxisChange();
        canvas->Invalidate();
    }
}

System::Void scaleGraph(ZedGraph::ZedGraphControl^ canvas) {
    canvas->GraphPane->XAxis->Scale->MinAuto = true;
    canvas->GraphPane->XAxis->Scale->MaxAuto = true;
    canvas->GraphPane->YAxis->Scale->MinAuto = true;
    canvas->GraphPane->YAxis->Scale->MaxAuto = true;
    canvas->GraphPane->IsBoundedRanges = true;
    canvas->AxisChange();
    canvas->Invalidate();
}

System::Void drawF(ZedGraph::ZedGraphControl^ canvas, RandValue& r) {
    ZedGraph::GraphPane^ panel = canvas->GraphPane;
    ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
    ZedGraph::LineItem^ Curve;

    double x = r.E[0] - 10;
    if (r.n == 1) x = r.offset;
    while (x < r.E[r.numExp - 1] + 10) {
        graph->Add(x, r.distFunc(x));
        x += 0.01;
    }
    Curve = panel->AddCurve("Dist. F", graph, System::Drawing::Color::Red,
        ZedGraph::SymbolType::None);
}

System::Void drawEF(ZedGraph::ZedGraphControl^ canvas, RandValue& r) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
    ZedGraph::LineItem^ Curve;

	graph->Add(r.E[0]-1, 0);
	graph->Add(r.E[0], 0);
	graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	for (int i = 1; i < r.numExp; i++) {
		graph->Add(r.E[i - 1], i / static_cast<double>(r.numExp));
		graph->Add(r.E[i], i / static_cast<double>(r.numExp));
		graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	}
	graph->Add(r.E[r.numExp-1], 1);
	graph->Add(r.E[r.numExp-1] + 1, 1);
	
    Curve = panel->AddCurve("Empiric. F", graph, System::Drawing::Color::Blue,
        ZedGraph::SymbolType::None);
}

System::Void drawf(ZedGraph::ZedGraphControl^ canvas, RandValue& r) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
	ZedGraph::LineItem^ Curve;

    double x = r.E[0] - 10;
    if (r.n == 1) x = r.offset;
	while (x < r.E[r.numExp-1]+10) {
		graph->Add(x, r.density(x));
		x += 0.01;
	}
	Curve = panel->AddCurve("density", graph, System::Drawing::Color::Red,
		ZedGraph::SymbolType::None);
}

System::Void drawhist(ZedGraph::ZedGraphControl^ canvas, RandValue& r) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
	ZedGraph::LineItem^ Curve;
	for (int i = 1; i < r.z; i++) {
        graph->Add(r.segments[i - 1], 0);
		graph->Add(r.segments[i-1], r.f[i-1]);
		graph->Add(r.segments[i], r.f[i - 1]);
        graph->Add(r.segments[i], 0);
		//graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	}
	Curve = panel->AddCurve("Histogram", graph, System::Drawing::Color::Blue,
		ZedGraph::SymbolType::None);
}

System::Void drawAll(ZedGraph::ZedGraphControl^ canvasF, ZedGraph::ZedGraphControl^ canvasf,
                     RandValue& r) {
    clearGraph(canvasF);
    clearGraph(canvasf);
    drawEF(canvasF, r);
    drawF(canvasF, r);
    drawhist(canvasf, r);
    drawf(canvasf, r);
    scaleGraph(canvasF);
    scaleGraph(canvasf);
}


System::Void clearTable(System::Windows::Forms::DataGridView^ Table) {
    Table->Rows->Clear();
    Table->Columns->Clear();
}

System::Void resizeTable(System::Windows::Forms::DataGridView^ Table) {
    Table->AutoResizeRowHeadersWidth(
  		System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
    Table->AutoResizeColumns(
   			System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
}

System::Void fillSegments(System::Windows::Forms::DataGridView^ Table, RandValue& r) {
    for (int i = 0; i < r.z ; i++)
        Table->Rows[0]->Cells[i]->Value = r.segments[i];
    resizeTable(Table);
}

System::Void fillBoundaries(System::Windows::Forms::DataGridView^ Table, RandValue& r) {
    for (int i = 1; i < r.k-1; i++)
        Table->Rows[0]->Cells[i]->Value = r.boundaries[i];
    Table->Rows[0]->Cells[0]->Value = -INFINITY;
    Table->Rows[0]->Cells[r.k-1]->Value = INFINITY;
    resizeTable(Table);
}
System::Void outputValues(System::Windows::Forms::DataGridView^ Table1, 
	                     System::Windows::Forms::DataGridView^ Table2, RandValue& r) {
	Table1->Rows->Clear();

	for (int i = 0; i < r.numExp; i++) {
		Table1->Rows->Add();
		Table1->Rows[i]->Cells[0]->Value = i + 1;
		Table1->Rows[i]->Cells[1]->Value = r.E[i];
	}

	Table2->Rows->Clear();
	Table2->Rows->Add();
	Table2->Rows[0]->Cells[0]->Value = r.expN;
	Table2->Rows[0]->Cells[1]->Value = r.expCalc;
	Table2->Rows[0]->Cells[2]->Value = abs(r.expCalc - r.expN);
	Table2->Rows[0]->Cells[3]->Value = r.varN;
	Table2->Rows[0]->Cells[4]->Value = r.varCalc;
	Table2->Rows[0]->Cells[5]->Value = abs(r.varCalc - r.varN);
	Table2->Rows[0]->Cells[6]->Value = r.rangeCalc;
	Table2->Rows[0]->Cells[7]->Value = r.meanCalc;
    Table2->Rows[0]->Cells[8]->Value = r.D;
}

System::Void outputHist(System::Windows::Forms::DataGridView^ Table, RandValue& r) {
    clearTable(Table);
    double curErr = 0, maxErr  = 0;
	for (int i = 1; i < r.z ; i++) {
		if (i != r.z-1) 
		Table->Columns->Add("Col" + System::Convert::ToString(i),
			System::Convert::ToString(i) + ", [" +
			System::Convert::ToString(r.segments[i-1]) + ", " + 
			System::Convert::ToString(r.segments[i])+")");
		else
			Table->Columns->Add("Col" + System::Convert::ToString(i),
				System::Convert::ToString(i)+" , [" + System::Convert::ToString(r.segments[i - 1]) + ", " + 
				System::Convert::ToString(r.segments[i]) + "]");
	}
	Table->Rows->Add();
	Table->Rows[0]->HeaderCell->Value = "Zj";
	Table->Rows->Add();
	Table->Rows[1]->HeaderCell->Value = "f(Zj)";
	Table->Rows->Add();
	Table->Rows[2]->HeaderCell->Value = "n/(N*(delta)";
	Table->AutoResizeRowHeadersWidth(
		System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);

	int *nj = new int[r.z-1];
	nj[0] = 0;
	for (int i = 1; i < r.z; i++) {
		nj[i - 1] = 0;
		for (int j = 0; j < r.numExp; j++) {
			if (r.E[j] >= r.segments[i - 1] && r.E[j] < r.segments[i] ||
                ( i == r.z-1 && r.E[j] >= r.segments[i - 1] && r.E[j] <= r.segments[i]))
				nj[i - 1]++;
		}
	}

	for (int i = 1; i < r.z; i++) {
		double mid = (r.segments[i - 1] + r.segments[i]) / 2;
		double delta = abs(r.segments[i - 1] - r.segments[i]);
        curErr = abs(r.density(mid) - nj[i - 1] / (r.numExp*delta));
		Table->Rows[0]->Cells[i-1]->Value = mid;
		Table->Rows[1]->Cells[i - 1]->Value = r.density(mid);
		Table->Rows[2]->Cells[i - 1]->Value =  r.f[i-1] = nj[i - 1]/(r.numExp*delta);
        if (curErr > maxErr) {
            maxErr = curErr;
            r.ni = i;
        }

	} 
    r.maxErr = maxErr;
    resizeTable(Table);
    delete[] nj;
}

System::Void outputQj(System::Windows::Forms::DataGridView^ Table, RandValue& r) {
    clearTable(Table);
    for (int i = 1; i < r.k; i++) {
        //if (i != r.z - 1)
            Table->Columns->Add("Col" + System::Convert::ToString(i),
                System::Convert::ToString(i) + ", [" +
                System::Convert::ToString(r.boundaries[i - 1]) + ", " +
                System::Convert::ToString(r.boundaries[i]) + ")");
     /*   else
            Table->Columns->Add("Col" + System::Convert::ToString(i),
                System::Convert::ToString(i) + " , [" + System::Convert::ToString(r.boundaries[i - 1]) + ", " +
                System::Convert::ToString(r.boundaries[i]) + "]");*/
    }
    Table->Rows->Add();
    Table->Rows[0]->HeaderCell->Value = "Qj";
    Table->AutoResizeRowHeadersWidth(
        System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
    for (int i = 1; i < r.k; i++) {
        Table->Rows[0]->Cells[i-1]->Value = r.distFunc(r.boundaries[i]) - r.distFunc(r.boundaries[i - 1]);
    }
    resizeTable(Table);
}