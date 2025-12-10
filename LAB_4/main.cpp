#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    int number;
    int d1, d2, d3;
    int min_digit;

    cout << "Ââåä³òü òðèçíà÷íå ÷èñëî:  ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Ïîìèëêà! ×èñëî íå òðèçíà÷íå." << endl;
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

    cout << "Íàéìåíøà öèôðà: " << min_digit << endl;
    cout << "Íàçâà: ";

    switch (min_digit) {
    case 0: cout << "Íóëü"; break;
    case 1: cout << "Îäèí"; break;
    case 2: cout << "Äâà"; break;
    case 3: cout << "Òðè"; break;
    case 4: cout << "×îòèðè"; break;
    case 5: cout << "Ï'ÿòü"; break;
    case 6: cout << "Ø³ñòü"; break;
    case 7: cout << "Ñ³ì"; break;
    case 8: cout << "Â³ñ³ì"; break;
    case 9: cout << "Äåâ'ÿòü"; break;
    default: cout << "Ïîìèëêà"; break;
    }

    cout << endl;

    if (min_digit % 2 == 0) {
        cout << "Ïàðíà" << endl;
    }
    else {
        cout << "Íåïàðíà" << endl;
    }

    return 0;
}
