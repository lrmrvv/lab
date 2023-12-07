#include <iostream>
#include <string>
using namespace std;
int main() {
    string input_string;
    cin >> input_string;  // Ввод строки

    int count_digits = 0;  // Переменная для подсчета цифр

    // Проходимся по каждому символу строки
    for (char& c : input_string) {
        // Проверяем, является ли символ цифрой
        if (isdigit(c)) {
            count_digits++;  // Увеличиваем счетчик цифр
        }
    }

    cout << count_digits << endl;  // Выводим количество цифр

    return 0;
}
