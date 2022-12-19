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
        cout << "Прiзвище : Демидченко\nIм'я : Олексiй\nПо батьковi : Русланович\nСтать : чоловiча\nДата народження : 15.05.2003\nАдреса : Днiпро, вул. Калинова\nНомер телефону : 0996178904\nМiсце навчання : ФПМ, ДНУ iм. Олеся Гончара\nГрупа : ПЗ-21-2\nХоббi : програмування\n";
        break;
    }
}
