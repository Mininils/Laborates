#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 100

double* full_elements(double* ptr_array, int n);

int task1() {
	
	char fname[20] = "number.txt";
	FILE* out;
	puts("�������� �����");
	if ((out = fopen(fname, "wt")) == NULL) {
		printf("������ �������� ����� ��� ������");
		return 0;
	}

	/********������ ������ � ������**********/
	printf("��� ������ � ����? 1 - ����� 5, 2 - ����� 12,56\n");
	int a;
	scanf("%d", &a);
	if (a == 1) {
		fprintf(out, "%d", 5);
	}

	fprintf(out, "%c", '\n');

	if (a == 2) {
		fprintf(out, "%.2f", 12.56);
	}
	/********����� ������ � ������ **********/

	fclose(out); // ������� ���� return 1;
}

int task2() {
	char fname[20] = "number2.txt";
	FILE* out;
	if ((out = fopen(fname, "wt")) == NULL) {
		printf("������ �������� ����� ��� ������");
		return 0;
	}
	double mas[N];
	printf("������� ���������� ���������\n");
	int n;
	scanf("%d", &n);

	full_elements(mas, n);

	for (int i = 1; i < n; i++) {
		fprintf(out, "%lf\n", mas[i]);
	}
	fclose(out);
}

double* full_elements(double* ptr_array, int n)
{
	double x1 = 1, x2 = 3;
	double dx = (x2 - x1) / n;
;	for (int i = 0; i <n; i++, x1+=dx)
	{
		
		ptr_array[i] = x1 * x1 * x1 - 3 * pow(cos(x1 * 1.04), 2);
	}
	return ptr_array;
}



int main(void)
{
	setlocale(LC_ALL, "RUS");
	//task1();
	task2();
}



