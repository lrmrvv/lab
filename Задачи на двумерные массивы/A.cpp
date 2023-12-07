#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        matrix[i][n - i - 1] = 1;
        for (int j = 0; j < n - i - 1; ++j) {
            matrix[i][j] = 0;
        }
        for (int j = n - i; j < n; ++j) {
            matrix[i][j] = 2;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
         cout << endl;
    }

    return 0;
}

