#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define N 10
#include <time.h>

double* ptr_array;
double* full_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n, double constant);
int put_elements(double* ptr_array, int n);


void sort_buble(int* ptrarr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ptrarr[j] > ptrarr[j + 1]) {
                temp = ptrarr[j];
                ptrarr[j] = ptrarr[j + 1];
                ptrarr[j + 1] = temp;
            }
        }
    }
}

void sort_select(int* ptrarr, int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (ptrarr[j] < ptrarr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = ptrarr[i];
            ptrarr[i] = ptrarr[min_idx];
            ptrarr[min_idx] = temp;
        }
    }
}

void sort_insert(int* ptrarr, int n) {
    int i, j, k;
    for (i = 1; i < n; i++) {
        k = ptrarr[i];
        j = i - 1;
        while (j >= 0 && ptrarr[j] > k) {
            ptrarr[j + 1] = ptrarr[j];
            j--;
        }
        ptrarr[j + 1] = k;
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

int* rand10(int mmax) {
    return 1 + rand() % mmax;
}
double rand_double(double dmin, double dmax) {
    double rand_value = rand() / (RAND_MAX * (dmax - dmin) + dmin);
    return rand_value;
}
int* rand10n(int n, int mmax) {
    int* arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = rand10(mmax);
    }
    return arr;
}
double* rand_double_n(int n, double dm) {
    double* arr = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        arr[i] = rand_double(-dm, dm);
    }
    return arr;
}

int task1() {
    int n;
    puts("vvedite kolichestvo elementov");
    scanf("%d", &n);
    int constant = 3;
    double* ptr_array = malloc(n * sizeof(double));
    if (ptr_array == NULL) {
        perror("Ошибка выделения памяти");
        return 1;
    }
    full_elements(ptr_array, n);
    clock_t t = clock();
    sort_buble(ptr_array, n);
    //sort_select(ptr_array, n);
    //sort_insert(ptr_array, n);
    clock_t e = clock();
    double time = (double)(e - t) / CLOCKS_PER_SEC;
    printf("Время выполнения сортировки: %.6f секунд\n", time);
    free(ptr_array);
}


int main() {
	setlocale(LC_ALL, "rus");
    task1();
}