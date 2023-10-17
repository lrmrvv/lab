#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Вычисление 2 в степени N
    long long result = pow(2, N);

    cout << result << endl;

    return 0;
}
