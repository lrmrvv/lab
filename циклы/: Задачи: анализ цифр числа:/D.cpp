#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    string binaryRepresentation = "";

    while (N > 0) {
        int digit = N % 2;
        binaryRepresentation += to_string(digit);
        N /= 2;
    }

    for (int i = binaryRepresentation.length() - 1; i >= 0; i--) {
        cout << binaryRepresentation[i];
    }

    cout << endl;

    return 0;
}
