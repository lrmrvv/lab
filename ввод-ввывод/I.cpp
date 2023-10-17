#include <iostream>

using namespace std;

int main() {
    int number;

    // Ввод трехзначного числа
    cin >> number;

    // Разбиение числа на цифры
    int digit1 = number / 100; // Первая цифра
    int digit2 = (number / 10) % 10; // Вторая цифра
    int digit3 = number % 10; // Третья цифра

    // Вычисление суммы цифр
    int sum = digit1 + digit2 + digit3;

    // Вывод результата
    cout << sum << endl;

    return 0;
}
