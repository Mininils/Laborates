#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

#define N 1000

double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n, double constant);
double sum_elements(double* ptr_array, int begin, int end);
int find_element(double* ptr_array, int n, double element);
double find_min_in_range(double* ptr_array, int n, double A, double B);

int main()
{
    setlocale(LC_CTYPE, "RUS");
    task1();
    return 0;
}

int task1()
{
    double array[N];
    int size;
    double constant = 3, A, B;

    printf("Введите размер массива > ");
    scanf("%d", &size);

    full_elements(array, size);
    printf("Исходный массив:\n");
    put_elements(array, size);

    calc_elements(array, size, constant);
    printf("Обработанный массив:\n");
    put_elements(array, size);

    double sum = sum_elements(array, 0, size - 1);
    printf("Сумма элементов массива: %.2f\n", sum);

    double search_element;
    printf("Введите элемент для поиска > ");
    scanf("%lf", &search_element);

    int index = find_element(array, size, search_element);
    if (index != -1)
    {
        printf("Элемент %.2f найден по индексу %d\n", search_element, index);
    }
    else
    {
        printf("Элемент %.2f не найден\n", search_element);
    }

    printf("Введите интервал (A, B) для поиска минимального элемента > ");
    scanf("%lf %lf", &A, &B);

    double min_in_range = find_min_in_range(array, size, A, B);
    if (min_in_range != A)
    {
        printf("Минимальный элемент в интервале (%.2f, %.2f): %.2f\n", A, B, min_in_range);
    }
    else
    {
        printf("В интервале (%.2f, %.2f) нет элементов массива\n", A, B);
    }
}

double* full_elements(double* ptr_array, int n)
{
    for (int i = 0; i < n; i++)
    {
        double x = (double)i;
        ptr_array[i] = x * x * x - 3 * pow(cos(x * 1.04), 2);
    }
    return ptr_array;
}

int put_elements(double* ptr_array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %.2f\n", i, ptr_array[i]);
    }
    return 0;
}

double* calc_elements(double* ptr_array, int n, double constant)
{
    for (int i = 0; i < n; i++)
    {
        ptr_array[i] -= constant;
    }
    return ptr_array;
}

double sum_elements(double* ptr_array, int begin, int end)
{
    double sum = 0.0;
    for (int i = begin; i <= end; i++)
    {
        sum += ptr_array[i];
    }
    return sum;
}

int find_element(double* ptr_array, int n, double element)
{
    for (int i = 0; i < n; i++)
    {
        if (ptr_array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

double find_min_in_range(double* ptr_array, int n, double A, double B)
{
    double min_value = A;
    for (int i = 0; i < n; i++)
    {
        if (ptr_array[i] > A && ptr_array[i] < B)
        {
            if (ptr_array[i] < min_value)
            {
                min_value = ptr_array[i];
            }
        }
    }
    return min_value;
}