#include <iostream>

using namespace std;

int main() {
    int N, K;

    // Ввод количества школьников и яблок
    cin >> N >> K;

    // Вычисление остатка яблок в корзинке
    int apples_remainder = K % N;

    // Вывод результата
    cout << apples_remainder << endl;

    return 0;
}
