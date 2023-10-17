#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Вычисление суммы геометрической прогрессии
    long long sum = (1 - pow(2, N + 1)) / (1 - 2);

    cout << sum << endl;

    return 0;
}
