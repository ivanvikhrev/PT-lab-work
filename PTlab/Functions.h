#pragma once

class RandValue {  // exponential random value
public:
	double m;  // Expected value
	double d;  // Variance

	double lambda;
	double offset;

	int n;  // Number of customers
	int numExp;  //  Number of experiments 
	double* E;  // Results array

	RandValue(double _m, double _d, int _n, int _numExp);
	~RandValue();
	 
	double inverseF(double p);  // inverse of the distribution function for exp
	void experiment();  //  series of experiments
};

System::Void ShowOnClick(System::Windows::Forms::DataGridView^ Table, double* data, int n);