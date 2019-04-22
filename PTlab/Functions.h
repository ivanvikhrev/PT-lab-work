#pragma once

class RandValue {  // exponential random value
public:
	//numerical characteristics given by user 
	double m;  // Expected value of one randval
	double d;  // Variance
	double lambda;
	double offset;

	double expN;  // Expected value of N randval
	double varN;  // Variance
	//double meanN;

	int n;  // Number of customers
	int numExp;  //  Number of experiments
    int ni;

	int z; // number of intervasl for hist
    int k;// number of intervasl for chi
	double *segments; //arr of boundaries for hist
    double *boundaries; // arr for chi
    double D;
    double maxErr;
    double R0;
    //arr 
    double *F;
	double *f;
	double *hist;
   
	//calculated numerical characteristic 
	double expCalc;
	double varCalc;
	double meanCalc;
	double rangeCalc;


	double *E;  // Results array
	RandValue() { expN = 0; };
	RandValue(double _m, double _d, int _n, int _numExp, int _z, int _k);
	~RandValue();
	 
	double inverseF(double p);  // inverse of the distribution function for exp
	void expectation();
	void variance();
	void mean();
	void range();
	void experiment();  //  series of experiments

    void calcD(); // max diff between F and EF
	void setSegments(double* _segments, int _z);
    void calcSegments();
    void setZ(int _z);
	void histogram(double* _f);

    //theoretical density
    double densityOne(double x);
	double density(double x);
    double distFuncOne(double x);
    double distFunc(double x);

    //Chi - squared distribution
    void calcR0();
    void setK(int _k);
    void calcBoundaries();
    void setBoundaries(double* _segments, int _z);

    double chiSquare(double r, double x);
    double FR0(double r, double x);
};

System::Void clearTable(System::Windows::Forms::DataGridView^ Table);

System::Void resizeTable(System::Windows::Forms::DataGridView^ Table);

System::Void fillSegments(System::Windows::Forms::DataGridView^ Table, RandValue& r);

System::Void outputValues(System::Windows::Forms::DataGridView^ Table1, 
	                     System::Windows::Forms::DataGridView^ Table2, RandValue& r);

System::Void outputHist(System::Windows::Forms::DataGridView^ Table, RandValue& r);

System::Void fillBoundaries(System::Windows::Forms::DataGridView^ Table, RandValue& r);

System::Void outputQj(System::Windows::Forms::DataGridView^ Table, RandValue& r);

System::Void clearGraph(ZedGraph::ZedGraphControl^ canvas);

System::Void scaleGraph(ZedGraph::ZedGraphControl^ canvas);

//graph of distribution function
System::Void drawF(ZedGraph::ZedGraphControl^ canvas, RandValue& r);

//graph of empirical distribution function
System::Void drawEF(ZedGraph::ZedGraphControl^ canvas, RandValue& r);

// graph of probability density function
System::Void drawf(ZedGraph::ZedGraphControl^ canvas, RandValue& r);
//histogramm
System::Void drawhist(ZedGraph::ZedGraphControl^ canvas, RandValue& r);

//all graphs
System::Void drawAll(ZedGraph::ZedGraphControl^ canvasF, ZedGraph::ZedGraphControl^ canvasf,
    RandValue& r);
