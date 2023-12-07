#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[50][50]; // Максимальный размер массива

    // Ввод элементов массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int transposed[50][50]; // Результат транспонирования

    // Транспонирование матрицы (замена строк на столбцы)
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposed[i][j] = matrix[j][i];
        }
    }

    // Отражение элементов каждой строки транспонированной матрицы
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            swap(transposed[i][j], transposed[i][n - 1 - j]);
        }
    }

    // Вывод повернутой матрицы
    cout << m << " " << n << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << transposed[i][j];
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
