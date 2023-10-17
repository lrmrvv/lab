#include <iostream>

using namespace std;

int main() {
    int n, m;

    // Ввод двух натуральных чисел
    cin >> n >> m;

    // Вычисление и проверка, делится ли одно из чисел на другое нацело
    int is_divisible = (n % m == 0) || (m % n == 0);

    // Вывод результата
    cout << is_divisible << endl;

    return 0;
}
