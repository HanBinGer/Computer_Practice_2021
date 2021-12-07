//#define _USE_MATH_DEFINES

#include <iostream>
/*
#include <sstream>

#include<time.h>
*/
#include <string>
#include<cmath>


int main()
{
	int n, count =0;
	std::cin >> n;
	int m = n;
	while (n != 1) {
		if (n % 2 == 0) {
			n >>= 1;
		}
		else {
			n *= 3;
			n += 1;
		}
		std::cout << n << ' ';
		if (n > m) m = n;
		++count;
	}
	std::cout << '\n' << "count: " << count << "	max: " << m;
}
