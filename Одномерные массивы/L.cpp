#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int heights[N];

    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int PetyaHeight;
    cin >> PetyaHeight;

    int position = 1;
    while (position <= N && heights[position - 1] >= PetyaHeight) {
        position++;
    }

    cout << position << endl;

    return 0;
}
