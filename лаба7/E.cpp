#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string filePath;
    getline(cin, filePath); // Считываем путь к файлу со входа

    stringstream ss(filePath);
    string item;
    vector<string> parts;

    // Разбиваем строку на части по разделителю "\"
    while (getline(ss, item, '\\')) {
        parts.push_back(item);
    }

    // Выводим каждый элемент (имя диска и названия каталогов)
    for (const auto& part : parts) {
        cout << part << endl;
    }

    return 0;
}
