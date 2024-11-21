#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>



double* ptr_array;
double* full_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n, double constant);
int put_elements(double* ptr_array, int n);

int task1() {
    int size;
    double constant = 3;
    printf("¬ведите размер массива: ");
    scanf("%d", size);

    ptr_array = (double*)malloc(size * sizeof(double));
    if (ptr_array == NULL) {
        puts("error");
        return -1;
    }
    full_elements(ptr_array, size);
    put_elements(ptr_array, size);

    calc_elements(ptr_array, size, constant);
    put_elements(ptr_array, size);

    free(ptr_array);
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
double* calc_elements(double* ptr_array, int n, double constant)
{
    for (int i = 0; i < n; i++)
    {
        ptr_array[i] -= constant;
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

int main() {
    task1();
    return 0;
}