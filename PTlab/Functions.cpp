#include "stdafx.h"

RandValue::RandValue(double _m, double _d, int _n, int _numExp, int _z) {
	m = _m;
	d = _d;
	n = _n;
	z = _z + 1;
	numExp = _numExp;
	expN = n * m;
	varN = n * d;
	expCalc = 0;
	varCalc = 0;
	meanCalc = 0;
	rangeCalc = 0;

	lambda = sqrt(1 / d);
	offset = m - sqrt(d);
	//meanN = n*(offset + log(2) / lambda);
	E = new double[numExp];
	segments = new double[z];
	f = new double[z-1];
}

RandValue::~RandValue() {
	delete[] E;
	delete[] segments;
}

void RandValue::calcSegments(double* _segments, int _z) {
	delete[] segments;
	z = _z;
	segments = new double[z];
	for (int i = 0; i < z; i++)
		segments[i] = _segments[i];
}

void RandValue::histogram(double *_f) {
	for (int i = 0; i < z; i++) {
		f[i] = _f[i];
	}
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
	if (numExp / 2 == 0)
		meanCalc = (E[numExp/ 2] + E[(numExp-1) / 2 ]) / 2;
	else
		meanCalc = E[numExp / 2];
}

void RandValue::range() {
	rangeCalc = E[numExp - 1] - E[0];
}

double RandValue::density(double x) {
	double pi = 3.14159265358979323846;
	double a = 1 / sqrt(2*pi*varN);
	double pow = (x - expN)*(x - expN) / (2 * varN*varN);
	return a * exp(-pow);
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
}

System::Void showData1(System::Windows::Forms::DataGridView^ Table1, 
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
}

System::Void showData2(System::Windows::Forms::DataGridView^ Table1,
	System::Windows::Forms::DataGridView^ Table2, RandValue& r, int z, bool flag) {
	double* segments = new double[z];
	if (flag) {
		for (int i = 0; i < z; i++)
			Table1->Rows[0]->Cells[i]->Value = r.E[0] + i * (r.rangeCalc / (r.z - 1));
		//Table1->Rows[0]->Cells[z-1]->Value = r.E[0] + (z-1) * (r.rangeCalc / (r.z - 1)) + 1;
	}
	else 
	{ }
	Table1->AutoResizeColumns(
			System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
	for (int i = 0; i < z; i++) {
		segments[i] = System::Convert::ToDouble(Table1->Rows[0]->Cells[i]->Value);
	}
	r.calcSegments(segments, z);
	Table2 ->Rows->Clear();
	Table2 ->Columns->Clear();
	for (int i = 1; i < r.z ; i++) {
		if (i != r.z-1) 
		Table2->Columns->Add("Col" + System::Convert::ToString(i),
			System::Convert::ToString(i) + ", [" +
			System::Convert::ToString(r.segments[i-1])+ ", " + 
			System::Convert::ToString(r.segments[i])+")");
		else
			Table2->Columns->Add("Col" + System::Convert::ToString(i),
				System::Convert::ToString(i)+" , [" + System::Convert::ToString(r.segments[i - 1]) + ", " + 
				System::Convert::ToString(r.segments[i]) + "]");
	}
	Table2->Rows->Add();
	Table2->Rows[0]->HeaderCell->Value = "Zj";
	Table2->Rows->Add();
	Table2->Rows[1]->HeaderCell->Value = "f(Zj)";
	Table2->Rows->Add();
	Table2->Rows[2]->HeaderCell->Value = "n/(N*(delta)";
	Table2->AutoResizeRowHeadersWidth(
		System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders);
	int *nj = new int[r.z-1];
	nj[0] = 0;
	for (int i = 1; i < r.z; i++) {
		nj[i - 1] = 0;
		for (int j = 0; j < r.numExp; j++) {
			if (r.E[j] >= r.segments[i - 1] && r.E[j] < r.segments[i] || ( i == r.z-1 && r.E[j] >= r.segments[i - 1] && r.E[j] < r.segments[i]))
				nj[i - 1]++;
		}
	}

	for (int i = 1; i < r.z; i++) {
		double mid = (r.segments[i - 1] + r.segments[i]) / 2;
		double delta = abs(r.segments[i - 1] - r.segments[i]);
		Table2->Rows[0]->Cells[i-1]->Value = mid;
		Table2->Rows[1]->Cells[i - 1]->Value = r.density(mid);
		Table2->Rows[2]->Cells[i - 1]->Value = r.f[i-1] = nj[i - 1]/(r.numExp*delta);

	}
	Table2->AutoResizeColumns(
		System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells);
	//Table2->Rows->Add();
	//Table2->Rows[0]->HeaderCell->Value = "s";
	delete[] segments;
}

System::Void drawgraph(ZedGraph::ZedGraphControl^ canvas,
	RandValue& r, System::String^ name) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
	ZedGraph::LineItem^ Curve;
	if (panel->CurveList->Count > 0)
	{
		panel->CurveList->Clear();
		canvas->AxisChange();
		canvas->Invalidate();
	}
	graph->Add(r.E[0], 0);
	graph->Add(r.E[0] - 1, 0);
	graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	for (int i = 1; i < r.numExp; i++) {
		graph->Add(r.E[i - 1], i / static_cast<double>(r.numExp));
		graph->Add(r.E[i], i / static_cast<double>(r.numExp));
		graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	}
	graph->Add(r.E[r.numExp-1], 1);
	graph->Add(r.E[r.numExp-1] + 1, 1);
	
	Curve = panel->AddCurve(name, graph, System::Drawing::Color::Blue,
		                    ZedGraph::SymbolType::None);

	panel->XAxis->Scale->MinAuto = true;
	panel->XAxis->Scale->MaxAuto = true;
	panel->YAxis->Scale->MinAuto = true;
	panel->YAxis->Scale->MaxAuto = true;
	panel->IsBoundedRanges = true;

	canvas->AxisChange();
	canvas->Invalidate();
}

System::Void drawf(ZedGraph::ZedGraphControl^ canvas,
	RandValue& r, System::String^ name) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
	ZedGraph::LineItem^ Curve;
	if (panel->CurveList->Count > 0)
	{
		panel->CurveList->Clear();
		canvas->AxisChange();
		canvas->Invalidate();
	}

	/*for (int i = 0; i < r.z; i++) {
		graph->Add(r.E[i], r.density(r.E[i]));
	}*/

	double x = 0;
	while (x < 100) {
		graph->Add(x, r.density(x));
		x += 0.01;
	}
	Curve = panel->AddCurve(name, graph, System::Drawing::Color::Red,
		ZedGraph::SymbolType::None);

	panel->XAxis->Scale->MinAuto = true;
	panel->XAxis->Scale->MaxAuto = true;
	panel->YAxis->Scale->MinAuto = true;
	panel->YAxis->Scale->MaxAuto = true;
	panel->IsBoundedRanges = true;
	canvas->AxisChange();
	canvas->Invalidate();
}

System::Void drawHist(ZedGraph::ZedGraphControl^ canvas,
	RandValue& r, System::String^ name) {
	ZedGraph::GraphPane^ panel = canvas->GraphPane;
	ZedGraph::PointPairList^ graph = gcnew ZedGraph::PointPairList();
	ZedGraph::LineItem^ Curve;
	/*if (panel->CurveList->Count > 0)
	{
		panel->CurveList->Clear();
		canvas->AxisChange();
		canvas->Invalidate();
	}*/

	for (int i = 1; i < r.z; i++) {
		graph->Add(r.segments[i-1], r.f[i-1]);
		graph->Add(r.segments[i], r.f[i - 1]);
		graph->Add(ZedGraph::PointPairBase::Missing, ZedGraph::PointPairBase::Missing);
	}

	Curve = panel->AddCurve(name, graph, System::Drawing::Color::Blue,
		ZedGraph::SymbolType::None);

	panel->XAxis->Scale->MinAuto = true;
	panel->XAxis->Scale->MaxAuto = true;
	panel->YAxis->Scale->MinAuto = true;
	panel->YAxis->Scale->MaxAuto = true;
	panel->IsBoundedRanges = true;
	canvas->AxisChange();
	canvas->Invalidate();
}