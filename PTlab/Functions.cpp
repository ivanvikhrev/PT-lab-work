#include "stdafx.h"

RandValue::RandValue(double _m, double _d, int _n, int _numExp) {
	m = _m;
	d = _d;
	n = _n;
	numExp = _numExp;

	lambda = sqrt(1 / d);
	offset = m - sqrt(d);

	E = new double[numExp];
}

RandValue::~RandValue() {
	delete[] E;
}

double RandValue::inverseF(double p) {
	return offset - std::log(1 - p) / lambda;
}

void RandValue::experiment() {
	double p = 0;
	double sum = 0;
	std::srand((unsigned)time(NULL));
	for (int i = 0; i < numExp; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			p = std::rand() / static_cast<double>(RAND_MAX + 1); // + 1
			sum += inverseF(p);
		}
		E[i] = sum;
	}
	std::sort(E, E + numExp);
}

System::Void ShowOnClick(System::Windows::Forms::DataGridView^ Table, double* data, int n) {
	Table->Rows->Clear();
	for (int i = 0; i < n; i++) {
		Table->Rows->Add();
		Table->Rows[i]->Cells[0]->Value = i + 1;
		Table->Rows[i]->Cells[1]->Value = data[i];
	}
}