#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int A[n][m];

    for (int i = 0; i < n * m; ++i) {
        A[i / m][i % m] = (i / m) * (i % m); // Заполнение элемента массива таблицей умножения
    }

    // Вывод двумерного массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << A[i][j]; // Форматированный вывод элементов массива
        }
        cout << endl; // Переход на новую строку после завершения строки таблицы
    }

    return 0;
}
