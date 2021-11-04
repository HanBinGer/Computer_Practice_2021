

#include <iostream>

//�������� �� ���������� �������� ������� ��� ��� ����������
int prov(int lim, int mas[], int digit)
{
    for (int i = 0; i < lim; ++i)
        if (mas[i] == digit)
            return 1;
    return 0;
}

int main()
{

    //�������� � ���������� �������
    int N;
    std::cin >> N;
    int *mas=new int [N];
    srand(time(0));
    for (int i = 0; i < N; ++i)
    {
        do
        {
            mas[i] =  rand() % (N+1);
        } while (prov(i, mas, mas[i]));
    }

    //���������� "�����"
    int x = ((1 + N) * N) / 2;
    for (int i = 0; i < N; ++i) {
        x -= mas[i];
    }
    std::cout << x;
    delete[] mas;
}