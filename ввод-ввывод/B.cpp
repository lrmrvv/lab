#include <iostream>

using namespace std;

int main() {
    int number;

    // Ввод целого числа
    cin >> number;

    // Вычисление следующего и предыдущего чисел
    int next_number = number + 1;
    int prev_number = number - 1;

    // Вывод результатов
    cout << "The next number for the number " << number << " is " << next_number << "." << endl;
    cout << "The previous number for the number " << number << " is " << prev_number << "." << endl;

    return 0;
}
