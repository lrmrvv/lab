#include <iostream>

using namespace std;

// Функция для распределения элементов массива
void distributeElements(const int* arr, int size, int*& positiveArr, int& positiveSize,
                        int*& negativeArr, int& negativeSize, int*& zeroArr, int& zeroSize) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            // Элемент положительный
            positiveArr[positiveSize] = arr[i];
            ++positiveSize;
        } else if (arr[i] < 0) {
            // Элемент отрицательный
            negativeArr[negativeSize] = arr[i];
            ++negativeSize;
        } else {
            // Элемент равен нулю
            zeroArr[zeroSize] = arr[i];
            ++zeroSize;
        }
    }
}

int main() {
    const int size = 10; // Размер статического массива
    int arr[size];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int* positiveArr = new int[size]; // Динамический массив для положительных элементов
    int positiveSize = 0;             // Размер массива положительных элементов

    int* negativeArr = new int[size]; // Динамический массив для отрицательных элементов
    int negativeSize = 0;             // Размер массива отрицательных элементов

    int* zeroArr = new int[size]; // Динамический массив для нулевых элементов
    int zeroSize = 0;             // Размер массива нулевых элементов

    distributeElements(arr, size, positiveArr, positiveSize, negativeArr, negativeSize, zeroArr, zeroSize);

    cout << "Положительные элементы:" << endl;
    for (int i = 0; i < positiveSize; ++i) {
        cout << positiveArr[i] << " ";
    }
    cout << endl;

    cout << "Отрицательные элементы:" << endl;
    for (int i = 0; i < negativeSize; ++i) {
        cout << negativeArr[i] << " ";
    }
    cout << endl;

    cout << "Нулевые элементы:" << endl;
    for (int i = 0; i < zeroSize; ++i) {
        cout << zeroArr[i] << " ";
    }
    cout << endl;

    // Освобождаем память, занятую динамическими массивами
    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
