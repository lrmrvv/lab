#include <iostream>

using namespace std;

int main() {
    int M, N;
    
    // Ввод размеров массивов M и N
    cout << "Введите размер массива А (M): ";
    cin >> M;
    cout << "Введите размер массива B (N): ";
    cin >> N;
    
    // Создаем массивы A и B
    int A[M];
    int B[N];

    // Ввод элементов массива A
    cout << "Введите элементы массива A:" << endl;
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    // Ввод элементов массива B
    cout << "Введите элементы массива B:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Создаем третий массив для хранения элементов, которые не являются общими
    int C[M + N]; // Максимальный размер - сумма размеров A и B

    // Инициализируем индекс для массива C
    int iC = 0;

    // Проверяем каждый элемент массива A
    for (int i = 0; i < M; ++i) {
        bool isDuplicate = false;

        // Проверяем, есть ли элемент A[i] в массиве B
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Если элемент A[i] не является общим для A и B, добавляем его в массив C
        if (!isDuplicate) {
            C[iC++] = A[i];
        }
    }

    // Проверяем каждый элемент массива B
    for (int i = 0; i < N; ++i) {
        bool isDuplicate = false;

        // Проверяем, есть ли элемент B[i] в массиве A
        for (int j = 0; j < M; ++j) {
            if (B[i] == A[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Если элемент B[i] не является общим для A и B, добавляем его в массив C
        if (!isDuplicate) {
            C[iC++] = B[i];
        }
    }

    // Выводим элементы массива C
    cout << "Элементы, которые не являются общими для A и B:" << endl;
    for (int i = 0; i < iC; ++i) {
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}
