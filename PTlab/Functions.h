#pragma once

class RandValue {  // exponential random value
public:
	//numerical characteristics given by user 
	double m;  // Expected value of one randval
	double d;  // Variance

	double expN;  // Expected value of N randval
	double varN;  // Variance
	double meanN;

	int n;  // Number of customers
	int numExp;  //  Number of experiments

	int z; // number of intervasl for hist
	double *segments;

	double *F;
//	double *F;
	double *f;
	double *hist;
	//calculated numerical characteristic 
	double expCalc;
	double varCalc;
	double meanCalc;
	double rangeCalc;

	double lambda;
	double offset;

	double *E;  // Results array
	RandValue() { expN = 0; };
	RandValue(double _m, double _d, int _n, int _numExp, int _z);
	~RandValue();
	 
	double inverseF(double p);  // inverse of the distribution function for exp
	void expectation();
	void variance();
	void mean();
	void range();
	void experiment();  //  series of experiments
	void calcSegments( double* _segments, int _z);
	void histogram(double* _f);
	//void changeZ(int _z) { z = _z };
	double density(double x);
};

System::Void showData1(System::Windows::Forms::DataGridView^ Table1, 
	                     System::Windows::Forms::DataGridView^ Table2, RandValue& r);
System::Void showData2(System::Windows::Forms::DataGridView^ Table1,
	System::Windows::Forms::DataGridView^ Table2, RandValue& r, int z, bool flag);
System::Void drawgraph(ZedGraph::ZedGraphControl^ canvas,
	                   RandValue& r, System::String^ name);
System::Void drawf(ZedGraph::ZedGraphControl^ canvas,
	RandValue& r, System::String^ name);
System::Void drawHist(ZedGraph::ZedGraphControl^ canvas,
	RandValue& r, System::String^ name);