#include <sstream>
#include <iostream>
#include <string>


int main()
{
    int n, m;
    do {
        std::cin >> n >>m;
    } while (n > 30 or n < 1);
    int h = (2*n-1)+1;
    for (int i = 1; i <h; i++) {
        for (int k = 0; k < m; k++) {
            for (int j = 0; j < abs(n - i); j++) {
                std::cout << ' ';
            }
            if (i <= n) {
                for (int j = 0; j < 2 * i - 1; j++) {
                    std::cout << '*';
                }
            }
            else {
                int h1=(2 * n - 1) - 2 * (i - n);
                for (int j = 0; j < h1; j++) {
                    std::cout << '*';
                }
            }
            for (int j = 0; j < abs(n - i); j++) {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
