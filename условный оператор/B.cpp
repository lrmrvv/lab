#include <iostream>

using namespace std;

int main() {
    int year;

    // Ввод номера года
    cin >> year;

    // Проверка, является ли год високосным
    bool is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Вывод результата
    if (is_leap_year) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
