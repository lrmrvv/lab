#include <iostream>
#include <string>
#include <cctype> // Для функции isalpha
using namespace std;

char encryptChar(char c, int shift) {
    // Шифрование символа на указанный сдвиг
    if (isalpha(c)) {
        char base = islower(c) ? 'a' : 'A';
        return static_cast<char>((c - base + shift) % 26 + base);
    }
    return c; // Если символ не является буквой, возвращаем его без изменений
}

string encryptWord(const string& word) {
    string encryptedWord = word;
    int shift = word.length(); // Вычисляем сдвиг для шифрования слова

    // Шифруем каждую букву слова
    for (size_t i = 0; i < word.length(); ++i) {
        encryptedWord[i] = encryptChar(word[i], shift);
    }

    return encryptedWord;
}

int main() {
    string input;
    getline(cin, input); // Считываем строку

    string word;
    bool wordStarted = false;

    // Шифруем каждое слово в строке и выводим результат
    for (char c : input) {
        if (isalpha(c)) {
            word += c;
            wordStarted = true;
        } else {
            if (wordStarted) {
                cout << encryptWord(word);
                word = "";
                wordStarted = false;
            }
            cout << c;
        }
    }

    // Если входная строка закончилась, но последнее слово осталось не обработанным
    if (wordStarted) {
        cout << encryptWord(word);
    }

    return 0;
}
