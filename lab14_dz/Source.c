#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double func(double* arr, int size, double A) {
    double maxAbs = 0;

    for (size_t i = 0; i < size; i++) {
        if (arr[i] != A) { // Проверяем, что элемент не равен A
            if (fabs(arr[i]) > fabs(maxAbs)) {
                maxAbs = arr[i]; // Обновляем максимальное значение
            }
        }
    }

    return maxAbs; // Возвращаем максимальное значение или 0, если ничего не найдено
}

int main() {
    setlocale(LC_ALL, "rus");
    double arr[] = {1.5, -3.2, 4.8, -4.8, 2.3};
    
    double size = sizeof(arr) / sizeof(arr[0]);
    double A = 4.8;

    double result = func(arr, size, A);

    if (result != 0) {
        printf("Максимальное по модулю значение, не равное %.2f: %.2f\n", A, result);
    }
    else {
        printf("Не найдено значений, не равных %.2f.\n", A);
    }

    return 0;
}