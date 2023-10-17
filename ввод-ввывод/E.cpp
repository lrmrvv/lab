#include <iostream>

using namespace std;

int main() {
    int v, t;

    // Ввод скорости и времени
    cin >> v >> t;

    // Вычисление номера отметки
    int position = (v * t) % 109;

    if (position < 0) {
        position = 109 + position;
    }

    // Вывод результата
    cout << position << endl;

    return 0;
}
