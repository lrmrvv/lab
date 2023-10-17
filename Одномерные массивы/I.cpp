#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int array[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    // Сдвигаем элементы вправо
    int temp = array[N - 1];
    for (int i = N - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = temp;

    // Выводим сдвинутый массив
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
