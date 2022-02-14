#include <iostream>
#include <fstream>

void reverse(int* M, int n) {
	for (int i = 0, j = n - 1; i < j; ++i, --j) {
		std::swap(M[i], M[j]);
	}
}

void shift_array(int* M, int n, int k) {
	while (k < 0) {
		k += n;
	}
	while (k >= n) {
		k -= n;
	}
	if (k > 0) {
		reverse(M, k);
		reverse(M + k, n - k);
		reverse(M, n);
	}
}

void print_array(int* M, int n) {
	for (int i = 0; i < 10; ++i) {
		std::cout << M[i] << ' ';
	}
	std::cout << std::endl;
}

int main(int argc, char* argv[])
{
	const int N = 10;
	int M[N];
	for (int i = 0; i < 10; ++i) {
		M[i] = i;
	}
	int k;
	do {
		std::cout << "k = ";
		std::cin >> k;
		shift_array(M, N, k);
		print_array(M, N);
	} while (k != 0);
}
