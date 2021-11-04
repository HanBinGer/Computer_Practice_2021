

#include <iostream>
#include <string>


int main() {

    int Day=1 , Month=1 , Year =1901;
    int a = (14 - Month) / 12; int y = 4800 + Year - a;int m = Month + 12 * a - 3;
    int  JD = Day + 365 * y + y / 4  - y / 100 + y / 400 + (153 * m + 2) / 5 - 32045;
    while (JD % 7 != 4) {
        JD++;
    }
    int count = 0;
    while (JD < 2451911) {
        int a = JD + 32044;
        int b = (4 * a + 3) / 146097;
        int c = a - (146097 * b) / 4;
        int d = (4 * c + 3) / 1461;
        int e = c - (1461 * d) / 4;
        int m = (5 * e + 2) / 153;
        if ((e - (153 * m + 2) / 5 + 1) == 13) count++;
        JD += 7;
    }
    std::cout << count;
}