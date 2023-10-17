#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int array[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    // Переставляем соседние элементы
    for (int i = 0; i < N - 1; i += 2) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    // Выводим переставленный массив
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
