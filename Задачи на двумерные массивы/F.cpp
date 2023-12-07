#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Создание одномерного динамического массива
    int *A = new int[n * m];

    int value = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i + j < m) {
                A[i * m + j] = value++;
            } else {
                A[i * m + j] = m - 1 + (i + j - m + 1);
            }
        }
    }

    // Вывод полученного массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << " " << A[i * m + j];
        }
        cout << endl;
    }

    // Освобождение памяти
    delete[] A;

    return 0;
}
