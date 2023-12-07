#include <iostream>
using namespace std;

int main() {
    const int maxSize = 1000; // Максимальная длина вводимой строки
    char input[maxSize]; // Создание массива символов для ввода строки
    cin.getline(input, maxSize); // Считывание строки со входа

    char* ptr = input;

    // Находим конец строки
    while (*ptr != '\0') {
        ptr++;
    }

    // Ищем начало последнего слова, двигаясь от конца строки
    while (ptr >= input && (*ptr == ' ' || *ptr == '\t' || *ptr == '\0')) {
        ptr--;
    }

    // Находим конец последнего слова
    char* lastWordEnd = ptr;
    while (ptr >= input && *ptr != ' ' && *ptr != '\t') {
        ptr--;
    }

    // Выводим последнее слово
    while (ptr < lastWordEnd) {
        ptr++;
        cout << *ptr;
    }

    return 0;
}
