#include <iostream>

using namespace std;

int main() {
    int number;
    int d1, d2, d3;
    int min_digit;

    cout << "Enter 3-digit num: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Error!" << endl;
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

    cout << "Min: " << min_digit << endl;
    cout << "Name: ";

    switch (min_digit) {
    case 0: cout << "Zero"; break;
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    case 3: cout << "Three"; break;
    case 4: cout << "Four"; break;
    case 5: cout << "Five"; break;
    case 6: cout << "Six"; break;
    case 7: cout << "Seven"; break;
    case 8: cout << "Eight"; break;
    case 9: cout << "Nine"; break;
    default: cout << "Error"; break;
    }

    cout << endl;

    if (min_digit % 2 == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}