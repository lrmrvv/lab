#include <iostream>
using namespace std;

int countWords(const char* str) {
    int wordCount = 0;
    bool inWord = false;

    // Перебираем каждый символ строки
    while (*str != '\0') {
        // Если текущий символ - пробел, переходим к следующему символу
        if (*str == ' ') {
            inWord = false;
        }
        // Если текущий символ не пробел и предыдущий был пробелом или это начало строки, увеличиваем счетчик слов
        else if (!inWord) {
            wordCount++;
            inWord = true;
        }
        str++; // Переходим к следующему символу строки
    }

    return wordCount;
}

int main() {
    const int maxSize = 1000; // Максимальная длина вводимой строки
    char input[maxSize]; // Создание массива символов для ввода строки

    cin.getline(input, maxSize); // Считываем строку со входа

    int words = countWords(input);
    cout << words << endl;

    return 0;
}
