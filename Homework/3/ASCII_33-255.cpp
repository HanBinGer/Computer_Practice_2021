#include <iostream>


int main()
{
    char c;
    for (int i = 33; i < 256; ++i) {
        c = i;
        std::cout << i << " - " << c<< std::endl;
    }
}