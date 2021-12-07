

#include <iostream>
#include <string>


int main() {

    int Day , Month , Year = 2020;
    std::cin >> Day>>Month;
    int a = (14 - Month) / 12; int y = 4800 + Year - a;int m = Month + 12 * a - 3;
    int  JD = Day + 365 * y + y / 4  - y / 100 + y / 400 + (153 * m + 2) / 5 - 32045;
    do {
        Year++;
        a = (14 - Month) / 12; y = 4800 + Year - a; m = Month + 12 * a - 3;
        JD = Day + 365 * y + y / 4  - y / 100 + y / 400 + (153 * m + 2) / 5 - 32045;
    } while (JD % 7 != 4);
    std::cout  << Year;
}
