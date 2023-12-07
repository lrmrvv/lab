#include <iostream>
#include <vector>

using namespace std;

bool isSymmetric(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    // Чтение элементов массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetric(matrix)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
