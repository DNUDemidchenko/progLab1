#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "1 - HELLO\n2 - SQUARE\n3 - ANKETA\n";
    int in;
    cin >> in;
    switch (in)
    {
    case 1:
        cout << "HELLO!!!\n";
        break;

    case 2:
        cout << "-------\n|     |\n|     |\n-------\n";
        break;

    case 3:
        cout << "��i����� : ����������\nI�'� : �����i�\n�� �������i : ����������\n����� : �����i��\n���� ���������� : 15.05.2003\n������ : ��i���, ���. ��������\n����� �������� : 0996178904\n�i��� �������� : ���, ��� i�. ����� �������\n����� : ��-21-2\n����i : �������������\n";
        break;
    }
}
