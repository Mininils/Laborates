#define N 100
#define _USE_MATH_DEFINES
//#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <locale.h>


double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n);
double sum_elements(double* ptr_array, int begin, int end);

int main() {
	setlocale(LC_ALL, "rus");
	task1();
}

int task1(){
	double array[N];
	int size;
	double cnst = 3;
	printf("Введите размер массива > ");
	scanf("%d", &size);

	full_elements(array, size);
	printf("Исходный массив:\n");
	put_elements(array, size);

	calc_elements(array, size, cnst);
	printf("Обработанный массив:\n");
	put_elements(array, size);

	double sum = sum_elements(array, 0, size - 1);
	printf("Сумма элементов массива: %.2f\n", sum);

}

double* full_elements(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++) {
	double x = (double)i;
	ptr_array[i] = x - 3 * pow(cos(1.04 * x), 2);
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

double* calc_elements(double *ptr_array, int n, double constant)
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
