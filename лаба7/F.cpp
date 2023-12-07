#include <iostream>
#include <string>
using namespace std;

void replaceSubstring(string& str, const string& pattern, const string& replacement) {
    size_t startPos = 0;

    // Ищем вхождения подстроки-образца и заменяем их на подстроку-замену
    while ((startPos = str.find(pattern, startPos)) != string::npos) {
        str.replace(startPos, pattern.length(), replacement);
        startPos += replacement.length(); // Сдвигаем позицию для поиска
    }
}

int main() {
    string input, pattern, replacement;
    getline(cin, input); // Считываем строку
    getline(cin, pattern); // Считываем подстроку-образец
    getline(cin, replacement); // Считываем подстроку-замену

    replaceSubstring(input, pattern, replacement); // Вызываем процедуру для замены подстроки

    cout << input << endl; // Выводим обработанную строку

    return 0;
}
