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
	puts("������� ���");
	scanf("%d", &years);

	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0) {
		printf("��� %d ����������", years);
	}
	else {
		printf("��� %d �� ����������", years);
	}
	//input: 15048 output: "��� 15048 ����������"
	//input: 333 output: "��� 333 �� ����������"
	//input: 1004 output: "��� 1004 ����������"

}
int task2()
{
	setlocale(LC_ALL, "RUS");
	double x;
	double c;
	int a = 0;
	puts("������� X");
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