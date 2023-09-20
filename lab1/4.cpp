#include <iostream>

using namespace std;

// Функция для проверки, является ли число простым
bool isPrime(int num) {
    if (num <= 1) return false; // 0 и 1 не являются простыми числами
    if (num == 2) return true;  // 2 - простое число

    // Проверяем делители от 2 до корня из числа
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // Найден делитель, число не простое
        }
    }
    return true;
}

// Функция для удаления простых чисел из динамического массива
int* removePrimes(int* arr, int& size) {
    int newSize = 0; // Размер нового массива
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            arr[newSize] = arr[i];
            ++newSize;
        }
    }

    // Создаем новый динамический массив и копируем в него элементы
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; ++i) {
        newArray[i] = arr[i];
    }

    // Освобождаем память, занятую исходным массивом
    delete[] arr;

    // Обновляем размер и возвращаем новый массив
    size = newSize;
    return newArray;
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    arr = removePrimes(arr, size);

    cout << "Массив после удаления простых чисел:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
