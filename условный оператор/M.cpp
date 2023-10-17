#include <iostream>

using namespace std;

int main() {
    int k;

    // Ввод количества фишек
    cin >> k;

    // Проверка, можно ли распределить фишки на доске
    if ((k % 2 == 0 && k % 4 == 0) || (k % 2 != 0 && k % 4 != 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
