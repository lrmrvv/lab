#include <iostream>

using namespace std;

int main() {
    int N, K;

    // Ввод количества школьников и яблок
    cin >> N >> K;

    // Вычисление количества яблок на каждого школьника
    int apples_per_student = K / N;

    // Вывод результата
    cout << apples_per_student << endl;

    return 0;
}
