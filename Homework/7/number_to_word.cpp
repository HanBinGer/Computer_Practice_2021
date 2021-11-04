

#include <iostream>
#include <string>

std::string word(int n, int r) {
    std::string ans;
    if (r == 2) {
        int count = 3;
        for (int i = 100; i > 0; i /= 10) {
            if (count == 1) {
                switch (n / i) {
                case 1: ans += "���� "; break;
                case 2: ans += "��� "; break;
                case 3: ans += "��� "; break;
                case 4: ans += "������ "; break;
                case 5: ans += "���� "; break;
                case 6: ans += "����� "; break;
                case 7: ans += "���� "; break;
                case 8: ans += "������ "; break;
                case 9: ans += "������ "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: {
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "������ "; break;
                    case 1: ans += "���������� "; break;
                    case 2: ans += "���������� "; break;
                    case 3: ans += "���������� "; break;
                    case 4: ans += "������������ "; break;
                    case 5: ans += "���������� "; break;
                    case 6: ans += "����������� "; break;
                    case 7: ans += "���������� "; break;
                    case 8: ans += "������������ "; break;
                    case 9: ans += "������������ "; break;
                    }
                    break;
                }
                case 2: ans += "�������� "; break;
                case 3: ans += "�������� "; break;
                case 4: ans += "����� "; break;
                case 5: ans += "��������� "; break;
                case 6: ans += "���������� "; break;
                case 7: ans += "��������� "; break;
                case 8: ans += "����������� "; break;
                case 9: ans += "��������� "; break;
                }
            }
            else if (count == 3) {
                switch (n / i) {
                case 1: ans += "��� "; break;
                case 2: ans += "������ "; break;
                case 3: ans += "������ "; break;
                case 4: ans += "��������� "; break;
                case 5: ans += "������� "; break;
                case 6: ans += "�������� "; break;
                case 7: ans += "������� "; break;
                case 8: ans += "��������� "; break;
                case 9: ans += "��������� "; break;
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
                case 1: ans += "���� "; break;
                case 2: ans += "��� "; break;
                case 3: ans += "��� "; break;
                case 4: ans += "������ "; break;
                case 5: ans += "���� "; break;
                case 6: ans += "����� "; break;
                case 7: ans += "���� "; break;
                case 8: ans += "������ "; break;
                case 9: ans += "������ "; break;
                }
            }
            else if (count == 2) {
                switch (n / i) {
                case 1: { 
                    count=0;
                    switch (n % 10) {
                    case 0: ans += "������ "; break;
                    case 1: ans += "���������� "; break;
                    case 2: ans += "���������� "; break;
                    case 3: ans += "���������� "; break;
                    case 4: ans += "������������ "; break;
                    case 5: ans += "���������� "; break;
                    case 6: ans += "����������� "; break;
                    case 7: ans += "���������� "; break;
                    case 8: ans += "������������ "; break;
                    case 9: ans += "������������ "; break;
                    } 
                    break;
                }
                case 2: ans += "�������� "; break;
                case 3: ans += "�������� "; break;
                case 4: ans += "����� "; break;
                case 5: ans += "��������� "; break;
                case 6: ans += "���������� "; break;
                case 7: ans += "��������� "; break;
                case 8: ans += "����������� "; break;
                case 9: ans += "��������� "; break;
                }
            }
            else if (count == 3) {
                switch (n/i) {
                case 1: ans += "��� "; break;
                case 2: ans += "������ "; break;
                case 3: ans += "������ "; break;
                case 4: ans += "��������� "; break;
                case 5: ans += "������� "; break;
                case 6: ans += "�������� "; break;
                case 7: ans += "������� "; break;
                case 8: ans += "��������� "; break;
                case 9: ans += "��������� "; break;
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
    if (N == 1000000000) std::cout << "���� ��������";
    else {
        int count = 1;
        std::string ans;
        while (N > 0) {
            if ((count == 2) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "����� " + ans; break;
                    case (1): ans = "������ " + ans; break;
                    case (2): ans = "������ " + ans; break;
                    case (3): ans = "������ " + ans; break;
                    case (4): ans = "������ " + ans; break;
                    case (5): ans = "����� " + ans; break;
                    case (6): ans = "����� " + ans; break;
                    case (7): ans = "����� " + ans; break;
                    case (8): ans = "����� " + ans; break;
                    case (9): ans = "����� " + ans; break;
                    }
                }
                else ans = "����� " + ans;
            }
            if ((count == 3) and (N % 1000 != 0)) {
                if ((N % 100) / 10 != 1) {
                    switch (N % 10) {
                    case (0): ans = "��������� " + ans; break;
                    case (1): ans = "������� " + ans; break;
                    case (2): ans = "�������� " + ans; break;
                    case (3): ans = "�������� " + ans; break;
                    case (4): ans = "�������� " + ans; break;
                    case (5): ans = "��������� " + ans; break;
                    case (6): ans = "��������� " + ans; break;
                    case (7): ans = "��������� " + ans; break;
                    case (8): ans = "��������� " + ans; break;
                    case (9): ans = "��������� " + ans; break;
                    }
                }
                else ans = "��������� " + ans;
            }
            ans = word(N % 1000, count) + ans;
            ++count;
            N /= 1000;
        }
        std::cout << ans;
    }
}