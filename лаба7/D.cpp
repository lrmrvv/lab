#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& word) {
    int start = 0;
    int end = word.length() - 1;

    // Проверяем символы с обоих концов слова
    while (start < end) {
        // Если символы не совпадают, слово не является палиндромом
        if (word[start] != word[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    string input;
    cin >> input; // Считываем слово со входа

    if (isPalindrome(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
