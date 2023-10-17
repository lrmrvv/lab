#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Ввод координат коня и фигуры
    cin >> x1 >> y1 >> x2 >> y2;

    // Вычисление разницы в координатах по горизонтали и вертикали
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    // Проверка, может ли конь побить фигуру за 1 ход
    if (dx == 1 && dy == 2 || dx == 2 && dy == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
