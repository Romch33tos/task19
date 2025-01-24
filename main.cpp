#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int year;
    cout << "Введите год: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " год является високосным." << endl;
    } else {
        cout << year << " год не является високосным." << endl;
    }
    return 0;
}
