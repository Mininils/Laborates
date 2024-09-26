#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int task1()
{
	setlocale(LC_ALL, "RUS");
	int years;
	puts("Введите год");
	scanf("%d", &years);

	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
		printf("Год %d високосный", years);
	}
	else {
		printf("Год %d не високосный", years);
	}
	//input: 15048 output: "Год 15048 високосный"
	//input: 333 output: "Год 333 не високосный"
	//input: 1004 output: "Год 1004 високосный"

}
int task2()
{
	setlocale(LC_ALL, "RUS");
	double x;
	double c;
	int a = 0;
	puts("Введите X");
	scanf("%lg", &x);
	double b = 1 / (x + 6);
	c = x <= 1 ? a : b;
	printf("%lg", c);
	//input: -100 output: 0 
	//input: 4 output:0,1

}

int main()
{
	//task1();
	task2();
}