#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	task1();
	getchar();
	task2();
}

int task1()
{
	int num;
	puts("Введите первое число");
	scanf("%d", &num);
	puts("Введено число А");
	int nam;
	puts("Введите второе число");
	scanf("%d", &nam);
	puts("Введено число В");
	printf("Сумма чисел %d и %d = %i",num, nam, num + nam );
	printf("\nРазность чисел %d и %d = %i", num, nam, num - nam);
	printf("\nПроизведение чисел %d и %d = %i",num, nam, num * nam);
	printf("\nЧастное от деления %d на %d = %i, остаток от деления второго числа на первое = %i", nam, num, nam/num, nam % num);


}

int task2()
{
	int dym;
	int a;
	float result;
	printf("Введите значение для рассчёта");
	scanf("%d", &a);

}
