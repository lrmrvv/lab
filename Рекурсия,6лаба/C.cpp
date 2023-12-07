#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    cin >> N;

    // Вызываем функцию и выводим результат
    int result = fibonacci(N);
    cout << result << endl;

    return 0;
}
