#include<iostream>
#include<fstream>
#include"matrix.h"




void delete_matrix(double** M, int rows) {
	for (int i = 0; i < rows; ++i) {
		delete[] M[i];
	}
	delete M;
}

double** zeros(int rows, int columns) {
	double** M = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			M[i][j] = 0;
		}
	}
	return M;
}

double** ones(int rows, int columns) {
	double** M = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			M[i][j] = 1;
		}
	}
	return M;
}

double** eye(int n) {
	double** M = create_matrix<double>(n, n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			M[i][j] = 0;
		}
		M[i][i] = 1;
	}
	return M;
}

void print_matrix(double** M, int rows, int columns, const char pre[]) {
	std::cout << pre;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}

}

double** linspace(double first, double last, int n) {
	if (n<2) throw"linspace arguments error";
	double step = (last - first) / (n-1);
	double** M = create_matrix<double>(1, n);
	for (int i = 0; i < n; ++i) {
		M[0][i] = first + i * step;
	}
	return M;
}

double** transpose(double** M, int rows, int columns) {
	double** T = create_matrix<double>(columns, rows);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			T[j][i] = M[i][j];
		}
	}
	return T;
}

double** mult(double lambda, double** M, int rows, int columns) {
	double** r = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			r[i][j] = lambda * M[i][j];
		}
	}
	return r;
}

double** plus(double** A, double** B, int rows, int columns) {
	double** r = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			r[i][j] = A[i][j] +B[i][j];
		}
	}
	return r;
}

double** minus(double** A, double** B, int rows, int columns) {
	double** r = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			r[i][j] = A[i][j] - B[i][j];
		}
	}
	return r;
}

double** mult(double** A, double** B, int rowsA, int columnsA, int columnsB) {
	double** C = create_matrix<double>(rowsA, columnsB);
	for (int i = 0; i < rowsA; ++i) {
		for (int j = 0; j < columnsB; ++j) {
			C[i][j] = 0;
			for (int s = 0; s < columnsA; ++s) {
				C[i][j] += A[i][s] * B[s][j];
			}
		}
	}
	return C;
}

double** input_matrix(int& rows, int& columns) {
	do {
		std::cout << "rows = ";
		std::cin >> rows;
	} while (rows < 1);
	do {
		std::cout << "columns = ";
		std::cin >> columns;
	} while (columns < 1);
	double** M = create_matrix<double>(rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			std::cout << "matrix(" << i + 1 << ',' << j + 1 << ") = ";
			std::cin >> M[i][j];
		}
	}
	return M;
}

double** read_matrix(const char* fname, int& n, int& m) {
	std::fstream in_file;
	in_file.open(fname);
	if (!in_file) throw "Can not open file!";
	in_file >> n >> m;
	double** M = create_matrix<double>(n, m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			in_file >> M[i][j];
		}
	}
	in_file.close();
	return M;
}

void write_matrix(const char* fname, double** M, int n, int m) {
	std::ofstream out_file(fname);
	if (!out_file) throw "Can not write file!";
	out_file << n << " " << m << std::endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			out_file << M[i][j] << " ";
		}
		out_file << std::endl;
	}
	out_file.close();
}

//îïðåäåëèòåëü ìàòðèöû ìåòîäîì ðàçëîæåíèÿ ïî ñòðîêå
double det_minor(double** M, int size){
	if (size == 1)return M[0][0];
	double sum = 0;
	for (int j = 0; j < size ; ++j) {
		double** M1 = create_matrix<double>(size - 1, size - 1);
		for (int l = 0; l < size - 1; ++l) {
			int z = 0;
			for (int m = 0; m < size - 1; ++m) {
				if (m != j) {
					M1[l][m] = M[l + 1][z];
					++z;
				}
				else {
					M1[l][m] = M[l + 1][++z];
					++z;
				}
			}
		}
		double s = M[0][j] * det_minor(M1, size-1);
		if (j % 2 != 0)s = -s;
		sum += s;
	}
	return sum;
}

//îïðåäåëèòåëü ìàòðèöû ìåòîäîì ãàóññà
double det_gaus(double** M, int size) {
	double** A = create_matrix<double>(size, size);
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			A[i][j] = M[i][j];
		}
	}
	int permut = 0;
	for (int k = 0; k < size-1; ++k) {
		int count = 1;
		while (!A[k][k] and k+count<size) {
			if (A[k + count][k]) {
				for (int i = 0; i < size; ++i) {
					double temp = A[k][i];
					A[k][i] = A[k + count][i];
					A[k + count][i] = temp;
				}
				++permut;
				break;
			}
			else ++count;
		}
		if(!!A[k][k]) return 0;

		for (int i = k+1; i < size; ++i) {
			double n = A[i][k];
			for (int j = k; j < size; ++j) {
				
				A[i][j] = A[i][j] - (A[k][j] / A[k][k]) * n;
			}
		}
		//print_matrix(A, size, size); îòëàäêà õîäà ðåøåíèÿ:)
		//std::cout << "-----------" << std::endl;
	}
	double det = 1;
	for (int i = 0; i < size; ++i) det *= A[i][i];
	delete_matrix(A, size);
	if (permut % 2) det = -det;
	return det;
} 


//îáðàòíàÿ ìàòðèöà
double** inv(double** M, int size) {
	double** A = create_matrix<double>(size, size);
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			A[i][j] = M[i][j];
		}
	}
	double** E = eye(size);

	int permut = 0;
	int multipl = 1;
	for (int k = 0; k < size - 1; ++k) {
		int count = 1;
		while (!A[k][k] and k + count < size) {
			if (A[k + count][k]) {
				for (int i = 0; i < size; ++i) {
					double temp = A[k][i];
					A[k][i] = A[k + count][i];
					A[k + count][i] = temp;

					double tempE = E[k][i];
					E[k][i] = E[k + count][i];
					E[k + count][i] = tempE;
				}
				++permut;
				break;
			}
			else ++count;
		}

		for (int i = k + 1; i < size; ++i) {
			double n = A[i][k];
			for (int j = k; j < size; ++j) {
				E[i][j] = E[i][j] - (E[k][j] / A[k][k]) * n;
				A[i][j] = A[i][j] - (A[k][j] / A[k][k]) * n;
			}
		}
		//print_matrix(A, size, size); îòëàäêà õîäà ðåøåíèÿ:)
		//std::cout << "-----------" << std::endl;
	}
	for (int k = size - 1; k > 0; --k) {
		for (int i = k - 1; i > -1; --i) {
			double n = A[i][k];
			for (int j = 0; j < size; ++j) {
				E[i][j] = E[i][j] - (E[k][j] / A[k][k]) * n;
				A[i][j] = A[i][j] - (A[k][j] / A[k][k]) * n;
			}
		}
	}
	for (int i = 0; i < size; ++i) {
		if (A[i][i] != 1) {
			for (int j = 0; j < size; ++j) {
				E[i][j] /= A[i][i];
			}
			A[i][i] = 1;
		}
	}

	//print_matrix(A, size,size, "A=\n");
	delete_matrix(A, size);
	return E;
}
