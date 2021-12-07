#define _USE_MATH_DEFINES

#include <iostream>
/*
#include <sstream>
#include <string>
#include<time.h>
*/
#include<cmath>


int main()
{
   int count = 0, prog = 1;
    double acc, pi = 0;

    std::cin >> acc;
    do {
        if (count % 2 == 0) pi += double(4. / prog);
        else pi -= double(4. / prog);
        prog += 2;
        ++count;
    } while (std::fabs(pi-M_PI)>=acc);
    std::cout << pi << ' ' << count<<'\n';

    int R = 100, hit=0;
    for (int i = 0; i < count; ++i) {
        int x = rand() % (R)+1;
        int y = rand() % (R)+1;
        if ((x * x + y * y) <= R * R) ++hit;
    }
    double pi_circ = 4 * ((hit) /double(count));
    std::cout << pi_circ << '\n';
    system("pause");
    return 0;
}
