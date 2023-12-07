#include <iostream>
using namespace std;

void generateSequences(int current[], int index, int N, int K) {
    if (index == N) {
        for (int i = 0; i < N; ++i) {
            cout << current[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= K; ++i) {
        current[index] = i;
        generateSequences(current, index + 1, N, K);
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    int current[6]; // Максимальный размер последовательности

    generateSequences(current, 0, N, K);

    return 0;
}
