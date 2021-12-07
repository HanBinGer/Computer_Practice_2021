

#include <iostream>
#include <string>

std::string word(int n, int r) {
    std::string ans;
    if (r == 2) {
        int count = 3;
        for (int i = 100; i > 0; i /= 10) {
            if (count == 1) {
                switch (n / i) {
                case 1: ans += "îäíŕ "; break;
                case 2: ans += "äâĺ "; break;
                case 3: ans += "ňđč "; break;
                case 4: ans += "÷ĺňűđĺ "; break;
                case 5: ans += "ď˙ňü "; break;
                case 6: ans += "řĺńňü "; break;
                case 7: ans += "ńĺěü "; break;
                case 8: ans += "âîńĺěü "; break;
                case 9: ans += "äĺâ˙ňü "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: {
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "äĺń˙ňü "; break;
                    case 1: ans += "îäčíŕäöŕňü "; break;
                    case 2: ans += "äâĺíŕäöŕňü "; break;
                    case 3: ans += "ňđčíŕäöŕňü "; break;
                    case 4: ans += "÷ĺňűđíŕäöŕňü "; break;
                    case 5: ans += "ď˙ňíŕäöŕňü "; break;
                    case 6: ans += "řĺńňíŕäöŕňü "; break;
                    case 7: ans += "ńĺěíŕäöŕňü "; break;
                    case 8: ans += "âîńĺěíŕäöŕňü "; break;
                    case 9: ans += "äĺâ˙ňíŕäöŕňü "; break;
                    }
                    break;
                }
                case 2: ans += "äâŕäöŕňü "; break;
                case 3: ans += "ňđčäöŕňü "; break;
                case 4: ans += "ńîđîę "; break;
                case 5: ans += "ď˙ňüäĺń˙ň "; break;
                case 6: ans += "řĺńňüäĺń˙ň "; break;
                case 7: ans += "ńĺěüäĺń˙ň "; break;
                case 8: ans += "âîńĺěüäĺń˙ň "; break;
                case 9: ans += "äĺâ˙íîńňî "; break;
                }
            }
            else if (count == 3) {
                switch (n / i) {
                case 1: ans += "ńňî "; break;
                case 2: ans += "äâĺńňč "; break;
                case 3: ans += "ňđčńňŕ "; break;
                case 4: ans += "÷ĺňűđĺńňŕ "; break;
                case 5: ans += "ď˙ňüńîň "; break;
                case 6: ans += "řĺńňüńîň "; break;
                case 7: ans += "ńĺěüńîň "; break;
                case 8: ans += "âîńĺěüńîň "; break;
                case 9: ans += "äĺâ˙ňüńîň "; break;
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
                case 1: ans += "îäčí "; break;
                case 2: ans += "äâŕ "; break;
                case 3: ans += "ňđč "; break;
                case 4: ans += "÷ĺňűđĺ "; break;
                case 5: ans += "ď˙ňü "; break;
                case 6: ans += "řĺńňü "; break;
                case 7: ans += "ńĺěü "; break;
                case 8: ans += "âîńĺěü "; break;
                case 9: ans += "äĺâ˙ňü "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: { 
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "äĺń˙ňü "; break;
                    case 1: ans += "îäčíŕäöŕňü "; break;
                    case 2: ans += "äâĺíŕäöŕňü "; break;
                    case 3: ans += "ňđčíŕäöŕňü "; break;
                    case 4: ans += "÷ĺňűđíŕäöŕňü "; break;
                    case 5: ans += "ď˙ňíŕäöŕňü "; break;
                    case 6: ans += "řĺńňíŕäöŕňü "; break;
                    case 7: ans += "ńĺěíŕäöŕňü "; break;
                    case 8: ans += "âîńĺěíŕäöŕňü "; break;
                    case 9: ans += "äĺâ˙ňíŕäöŕňü "; break;
                    } 
                    break;
                }
                case 2: ans += "äâŕäöŕňü "; break;
                case 3: ans += "ňđčäöŕňü "; break;
                case 4: ans += "ńîđîę "; break;
                case 5: ans += "ď˙ňüäĺń˙ň "; break;
                case 6: ans += "řĺńňüäĺń˙ň "; break;
                case 7: ans += "ńĺěüäĺń˙ň "; break;
                case 8: ans += "âîńĺěüäĺń˙ň "; break;
                case 9: ans += "äĺâ˙íîńňî "; break;
                }
            }
            else if (count == 3) {
                switch (n/i) {
                case 1: ans += "ńňî "; break;
                case 2: ans += "äâĺńňč "; break;
                case 3: ans += "ňđčńňŕ "; break;
                case 4: ans += "÷ĺňűđĺńňŕ "; break;
                case 5: ans += "ď˙ňüńîň "; break;
                case 6: ans += "řĺńňüńîň "; break;
                case 7: ans += "ńĺěüńîň "; break;
                case 8: ans += "âîńĺěüńîň "; break;
                case 9: ans += "äĺâ˙ňüńîň "; break;
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
    if (N == 1000000000) std::cout << "îäčí ěčëëčŕđä";
    else {
        int count = 1;
        std::string ans;
        while (N > 0) {
            if ((count == 2) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "ňűń˙÷ " + ans; break;
                    case (1): ans = "ňűń˙÷ŕ " + ans; break;
                    case (2): ans = "ňűń˙÷č " + ans; break;
                    case (3): ans = "ňűń˙÷č " + ans; break;
                    case (4): ans = "ňűń˙÷č " + ans; break;
                    case (5): ans = "ňűń˙÷ " + ans; break;
                    case (6): ans = "ňűń˙÷ " + ans; break;
                    case (7): ans = "ňűń˙÷ " + ans; break;
                    case (8): ans = "ňűń˙÷ " + ans; break;
                    case (9): ans = "ňűń˙÷ " + ans; break;
                    }
                }
                else ans = "ňűń˙÷ " + ans;
            }
            if ((count == 3) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "ěčëëčîíîâ " + ans; break;
                    case (1): ans = "ěčëëčîí " + ans; break;
                    case (2): ans = "ěčëëčîíŕ " + ans; break;
                    case (3): ans = "ěčëëčîíŕ " + ans; break;
                    case (4): ans = "ěčëëčîíŕ " + ans; break;
                    case (5): ans = "ěčëëčîíîâ " + ans; break;
                    case (6): ans = "ěčëëčîíîâ " + ans; break;
                    case (7): ans = "ěčëëčîíîâ " + ans; break;
                    case (8): ans = "ěčëëčîíîâ " + ans; break;
                    case (9): ans = "ěčëëčîíîâ " + ans; break;
                    }
                }
                else ans = "ěčëëčîíîâ " + ans;
            }
            ans = word(N % 1000, count) + ans;
            ++count;
            N /= 1000;
        }
        std::cout << ans;
    }
}
