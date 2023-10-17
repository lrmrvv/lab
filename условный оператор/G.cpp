#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Ввод координат ладьи и фигуры
    cin >> x1 >> y1 >> x2 >> y2;

    // Проверка, бьет ли ладья фигуру за 1 ход
    if (x1 == x2 || y1 == y2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
