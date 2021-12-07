#include <iostream>
#include <numeric>



int main()
{
	int N, shift;
	std::cin >>N>>shift;
    shift %= N;
	 int* M = new  int [N];
	for (int i = 0; i < N; ++i) {
		M[i] = i + 1;
	}

    int  cur,mov, tmp, nod= std::gcd(shift, N);
    for (int i = 0; i < nod; i++) {
        tmp = M[i];
        cur = i;
        while (true) {
                mov = cur + shift;
                if (mov >= N)
                    mov = mov - N;
                if (mov == i)
                    break;
                M[cur] = M[mov];
                cur = mov;
            }

        M[cur] = tmp;
    }


	for (int i = 0; i < N; ++i) {
		std::cout << M[i] << " ";
	}
	
	delete[] M;
}