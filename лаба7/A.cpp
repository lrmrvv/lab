#include <iostream>
using namespace std;

int main() {
    const int maxSize = 1000; // Максимальная длина вводимой строки
    char input[maxSize]; // Создание массива символов для ввода строки
    cin.getline(input, maxSize); // Считывание строки со входа

    char* ptr = input;
    
    // Пропуск начальных пробелов (если есть)
    while (*ptr != '\0' && *ptr == ' ') {
        ptr++;
    }

    // Вывод первого слова до пробела или конца строки
    while (*ptr != '\0' && *ptr != ' ') {
        cout << *ptr;
        ptr++;
    }

    return 0;
}
