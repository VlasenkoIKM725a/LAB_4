#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    int number;
    int d1, d2, d3;
    int min_digit;

    cout << "Введіть тризначне число: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Помилка! Число не тризначне." << endl;
        return 1;
    }

    d1 = number / 100;
    d2 = (number / 10) % 10;
    d3 = number % 10;

    min_digit = d1;
    if (d2 < min_digit) {
        min_digit = d2;
    }
    if (d3 < min_digit) {
        min_digit = d3;
    }

    cout << "Найменша цифра: " << min_digit << endl;
    cout << "Назва: ";

    switch (min_digit) {
    case 0: cout << "Нуль"; break;
    case 1: cout << "Один"; break;
    case 2: cout << "Два"; break;
    case 3: cout << "Три"; break;
    case 4: cout << "Чотири"; break;
    case 5: cout << "П'ять"; break;
    case 6: cout << "Шість"; break;
    case 7: cout << "Сім"; break;
    case 8: cout << "Вісім"; break;
    case 9: cout << "Дев'ять"; break;
    default: cout << "Помилка"; break;
    }

    cout << endl;

    if (min_digit % 2 == 0) {
        cout << "Парна" << endl;
    }
    else {
        cout << "Непарна" << endl;
    }

    return 0;
}
