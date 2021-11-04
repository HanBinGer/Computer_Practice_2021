

#include <iostream>
#include <string>

std::string word(int n, int r) {
    std::string ans;
    if (r == 2) {
        int count = 3;
        for (int i = 100; i > 0; i /= 10) {
            if (count == 1) {
                switch (n / i) {
                case 1: ans += "одна "; break;
                case 2: ans += "две "; break;
                case 3: ans += "три "; break;
                case 4: ans += "четыре "; break;
                case 5: ans += "п€ть "; break;
                case 6: ans += "шесть "; break;
                case 7: ans += "семь "; break;
                case 8: ans += "восемь "; break;
                case 9: ans += "дев€ть "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: {
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "дес€ть "; break;
                    case 1: ans += "одинадцать "; break;
                    case 2: ans += "двенадцать "; break;
                    case 3: ans += "тринадцать "; break;
                    case 4: ans += "четырнадцать "; break;
                    case 5: ans += "п€тнадцать "; break;
                    case 6: ans += "шестнадцать "; break;
                    case 7: ans += "семнадцать "; break;
                    case 8: ans += "восемнадцать "; break;
                    case 9: ans += "дев€тнадцать "; break;
                    }
                    break;
                }
                case 2: ans += "двадцать "; break;
                case 3: ans += "тридцать "; break;
                case 4: ans += "сорок "; break;
                case 5: ans += "п€тьдес€т "; break;
                case 6: ans += "шестьдес€т "; break;
                case 7: ans += "семьдес€т "; break;
                case 8: ans += "восемьдес€т "; break;
                case 9: ans += "дев€носто "; break;
                }
            }
            else if (count == 3) {
                switch (n / i) {
                case 1: ans += "сто "; break;
                case 2: ans += "двести "; break;
                case 3: ans += "триста "; break;
                case 4: ans += "четыреста "; break;
                case 5: ans += "п€тьсот "; break;
                case 6: ans += "шестьсот "; break;
                case 7: ans += "семьсот "; break;
                case 8: ans += "восемьсот "; break;
                case 9: ans += "дев€тьсот "; break;
                }
            }
            --count;
            n %= i;
        }
    }

    else {
        int count = 3;
        for(int i =100;i>0;i/=10) {
            if (count == 1) {
                switch (n / i) {
                case 1: ans += "один "; break;
                case 2: ans += "два "; break;
                case 3: ans += "три "; break;
                case 4: ans += "четыре "; break;
                case 5: ans += "п€ть "; break;
                case 6: ans += "шесть "; break;
                case 7: ans += "семь "; break;
                case 8: ans += "восемь "; break;
                case 9: ans += "дев€ть "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: { 
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "дес€ть "; break;
                    case 1: ans += "одинадцать "; break;
                    case 2: ans += "двенадцать "; break;
                    case 3: ans += "тринадцать "; break;
                    case 4: ans += "четырнадцать "; break;
                    case 5: ans += "п€тнадцать "; break;
                    case 6: ans += "шестнадцать "; break;
                    case 7: ans += "семнадцать "; break;
                    case 8: ans += "восемнадцать "; break;
                    case 9: ans += "дев€тнадцать "; break;
                    } 
                    break;
                }
                case 2: ans += "двадцать "; break;
                case 3: ans += "тридцать "; break;
                case 4: ans += "сорок "; break;
                case 5: ans += "п€тьдес€т "; break;
                case 6: ans += "шестьдес€т "; break;
                case 7: ans += "семьдес€т "; break;
                case 8: ans += "восемьдес€т "; break;
                case 9: ans += "дев€носто "; break;
                }
            }
            else if (count == 3) {
                switch (n/i) {
                case 1: ans += "сто "; break;
                case 2: ans += "двести "; break;
                case 3: ans += "триста "; break;
                case 4: ans += "четыреста "; break;
                case 5: ans += "п€тьсот "; break;
                case 6: ans += "шестьсот "; break;
                case 7: ans += "семьсот "; break;
                case 8: ans += "восемьсот "; break;
                case 9: ans += "дев€тьсот "; break;
                }
            }
            --count;
            n %= i;
        }
    }
    return ans;
}

int main()
{
    system("chcp 1251");
    int N=0;
    do {
        std::cin >> N;
    } while (N > 1000000000);
    if (N == 1000000000) std::cout << "один миллиард";
    else {
        int count = 1;
        std::string ans;
        while (N > 0) {
            if ((count == 2) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "тыс€ч " + ans; break;
                    case (1): ans = "тыс€ча " + ans; break;
                    case (2): ans = "тыс€чи " + ans; break;
                    case (3): ans = "тыс€чи " + ans; break;
                    case (4): ans = "тыс€чи " + ans; break;
                    case (5): ans = "тыс€ч " + ans; break;
                    case (6): ans = "тыс€ч " + ans; break;
                    case (7): ans = "тыс€ч " + ans; break;
                    case (8): ans = "тыс€ч " + ans; break;
                    case (9): ans = "тыс€ч " + ans; break;
                    }
                }
                else ans = "тыс€ч " + ans;
            }
            if ((count == 3) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "миллионов " + ans; break;
                    case (1): ans = "миллион " + ans; break;
                    case (2): ans = "миллиона " + ans; break;
                    case (3): ans = "миллиона " + ans; break;
                    case (4): ans = "миллиона " + ans; break;
                    case (5): ans = "миллионов " + ans; break;
                    case (6): ans = "миллионов " + ans; break;
                    case (7): ans = "миллионов " + ans; break;
                    case (8): ans = "миллионов " + ans; break;
                    case (9): ans = "миллионов " + ans; break;
                    }
                }
                else ans = "миллионов " + ans;
            }
            ans = word(N % 1000, count) + ans;
            ++count;
            N /= 1000;
        }
        std::cout << ans;
    }
}