#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Ввод трех целых чисел
    cin >> a >> b >> c;

    // Нахождение максимального числа
    int max_number = a;
    if (b > max_number) {
        max_number = b;
    }
    if (c > max_number) {
        max_number = c;
    }

    // Вывод результата
    cout << max_number << endl;

    return 0;
}
