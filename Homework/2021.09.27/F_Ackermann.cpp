#include <iostream>

int akkerman(int m, int n) {
    if (m == 0) return (n + 1);
    if (m > 0 and n == 0) return akkerman(m - 1, 1);
    if (m > 0 and n > 0) return akkerman(m - 1, akkerman(m, n - 1));
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << akkerman(a, b);
}
