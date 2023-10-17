#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Ввод координат ферзя и фигуры
    cin >> x1 >> y1 >> x2 >> y2;

    // Проверка, может ли ферзь побить фигуру за 1 ход
    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
