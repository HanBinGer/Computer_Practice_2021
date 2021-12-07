#pragma once

template <typename T>
T** create_matrix(int rows, int columns) {
	if (rows < 1) throw "Number of rows must be positive";
	if (columns < 1) throw "Number of columns must be positive";
	T** M = new T* [rows];
	for (int i = 0; i < rows; ++i) {
		M[i] = new T[columns];
	}
	return M;
}

void delete_matrix(double** M, int rows);
double** zeros(int rows, int columns);
double** ones(int rows, int columns);
double** eye(int n);
void print_matrix(double** M, int rows, int columns, const char pre[]="");
double** linspace(double first, double last, int n);
double** transpose(double** M, int rows, int columns);
double** mult(double lambda, double** M, int rows, int columns);
double** plus(double** A, double** B, int rows, int columns);
double** minus(double** A, double** B, int rows, int columns);
double** mult(double** A, double** B, int rowsA, int columnsA, int columnsB);
double** input_matrix(int& rows, int& columns);
double** read_matrix(const char* fname, int& n, int& m);
void write_matrix(const char* fname, double** M, int n, int m);

//îïðåäåëèòåëü ìàòðèöû ìåòîäîì ãàóññà
double det_gaus(double** M, int size);

//îáðàòíàÿ ìàòðèöà
double** inv(double** M, int size);

//îïðåäåëèòåëü ìàòðèöû ìåòîäîì ðàçëîæåíèÿ ïî ñòðîêå
double det_minor(double** M, int size);
