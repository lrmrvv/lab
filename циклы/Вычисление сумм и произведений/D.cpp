#include <iostream>

using namespace std;

// Функция для вычисления факториала
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n, k;
    cin >> n >> k;

    // Вычисление C(n, k)
    int result = factorial(n) / (factorial(k) * factorial(n - k));

    cout << result << endl;

    return 0;
}
