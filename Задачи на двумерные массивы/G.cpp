#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int A[50][50]; // Максимальный размер массива

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // Направление заполнения слева направо
            for (int j = 0; j < m; ++j) {
                A[i][j] = counter++;
            }
        } else { // Направление заполнения справа налево
            for (int j = m - 1; j >= 0; --j) {
                A[i][j] = counter++;
            }
        }
    }

    // Вывод полученного массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << A[i][j]; // Форматированный вывод элементов массива
        }
        cout << endl;
    }

    return 0;
}
