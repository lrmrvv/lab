#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> array(n, vector<int>(m, 0));

    // Заполнение первой строки и первого столбца массива значениями 1
    for (int i = 0; i < n; ++i) {
        array[i][0] = 1;
    }
    for (int j = 0; j < m; ++j) {
        array[0][j] = 1;
    }

    // Заполнение остальных элементов массива по правилу A[i][j] = A[i-1][j] + A[i][j-1]
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            array[i][j] = array[i - 1][j] + array[i][j - 1];
        }
    }

    // Вывод двумерного массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(6) << array[i][j]; // Форматированный вывод элементов массива
        }
        cout << endl;
    }

    return 0;
}
