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
    int n;
    std::cout << "enter the number: ";
    std::cin >> n;
    for (int i = 1000; i > 0; i/=10) {
        //std::cout << n / i<<' ';
        int tmp = n / i;
        if (i == 1000) {
            for (int j = 0; j < tmp; j++) std::cout << 'M';
        }
        else if (i == 100) {
            if (tmp<=3)  for (int j = 0; j < tmp; j++) std::cout << 'C';
            else if (tmp <= 5) {
                for (int j = 0; j < 5-tmp; j++) std::cout << 'C';
                std::cout << 'D';
            }
            else if (tmp <= 8) {
                std::cout << 'D';
                for (int j = 0; j < tmp-5; j++) std::cout << 'C';
            }
            else {
                std::cout << 'C'<<'M';
            }
        }
        else if (i == 10) {
            if (tmp <= 3)  for (int j = 0; j < tmp; j++) std::cout << 'X';
            else if (tmp <= 5) {
                for (int j = 0; j < 5 - tmp; j++) std::cout << 'X';
                std::cout << 'L';
            }
            else if (tmp <= 8) {
                std::cout << 'L';
                for (int j = 0; j < tmp - 5; j++) std::cout << 'X';
            }
            else {
                std::cout << 'X'<<'C';
            }
        }
        else if (i == 1) {
            if (tmp <= 3)  for (int j = 0; j < tmp; j++) std::cout << 'I';
            else if (tmp <= 5) {
                for (int j = 0; j < 5 - tmp; j++) std::cout << 'I';
                std::cout << 'V';
            }
            else if (tmp <= 8) {
                std::cout << 'V';
                for (int j = 0; j < tmp - 5; j++) std::cout << 'I';
            }
            else {
                std::cout << 'I'<<'X';
            }
        }
        n %= i;
    }

}
