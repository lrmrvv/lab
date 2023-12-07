#include <iostream>
#include <string>
using namespace std;

int countSubstringOccurrences(const string& mainStr, const string& subStr) {
    int count = 0;
    size_t startPos = 0;

    // Ищем вхождения подстроки-образца в строке
    while ((startPos = mainStr.find(subStr, startPos)) != string::npos) {
        count++;
        startPos += subStr.length(); // Сдвигаем позицию для поиска
    }

    return count;
}

int main() {
    string mainString, subString;
    getline(cin, mainString); // Считываем строку
    getline(cin, subString); // Считываем подстроку-образец

    int occurrences = countSubstringOccurrences(mainString, subString); // Подсчитываем количество вхождений

    cout << occurrences << endl; // Выводим количество вхождений

    return 0;
}
