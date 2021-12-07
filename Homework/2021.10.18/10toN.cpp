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
    int x, tmp, n, m=0;
    std::cout << "enter the number: ";
    std::cin >> x;
    std::cout << "enter the radix: ";
    std::cin >> n;
    std::cout << "answer: ";
    tmp = x;

    while (tmp) {
        ++m;
        tmp /= n;
    }

    m = m > 0 ? m - 1 : 0;

    tmp = 1;
    for (int i = 0; i < m; ++i) {
        tmp *= n;
    }
    m = tmp;

    tmp = x;
    while (m) {
        int digit = tmp / m;
        if (digit < 10) std::cout << digit;
        else std::cout << char('A' + digit-10);
        tmp %= m;
        m /= n;
    }

}
