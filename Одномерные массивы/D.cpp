#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int array[N];

    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    int count = 0;

    for (int i = 1; i < N; i++) {
        if (array[i] > array[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
