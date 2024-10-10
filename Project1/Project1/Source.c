#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int t01()
{
	setlocale(LC_ALL, "RUS");
	int a;
	char c;
	scanf("%d %c", &a, &c);

	for (int b = 1; b <= 1; b++) putchar('+');
		for (int start = 1; start <= a; start++) putchar(c);
			for (int c = 1; c <= 1; c++) putchar('+');
}

int t02()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int d;
	char c;
	char b;
	scanf("%d %c %c", &a, &c, &b);


	for (int start = 1; start <= a/2; start++) putchar(c);
	for (int k = 1; k <= a/2; k++) putchar(b);

}

int t03()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int d;
	char c;
	char b;
	scanf("%d %c", &a, &c);


	for (int start = 1; start <= a; start++) putchar(c), putchar('!');

}

int ramochka()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int d;
	char c;
	char b;
	scanf("%c %d", &b, &a);

	putchar('!');
	for (int start = 1; start <= a; start++) putchar(b); putchar('\n'); {
		putchar('*');  putchar('\n');
		putchar('*'); putchar('\n');
		putchar('!'); }
				for (int start = 1; start <= a; start++) putchar(b);
}
int t1()
{
	int m, n;
	int S = 0;
	int k = 0;
	printf("Введите значение m:");
	scanf("%d", &m);
	printf("Введите значение n:");
	scanf("%d", &n);
	for (int I = m; I >= n; I--)
	{
		S += I;
		printf("\nВыполнено %d раз", k++);
	}
	printf("\nРезультат %d\n", S);
}
int a1()
{
	double n;
	int b;
	scanf("%lf", &n);
	int p = n;
	for (int k = 0; k <= p; k++, n--); {
		b = pow(2, n);
		printf("%d", b);
		for (int c = 0; c <= n; c++); {
			putchar(' ');
			b = pow(2, n);
			printf("%d", b);
		}
	}
}
//int t2()

int main()
{
	//t01();
	//t02();
	//t03();
	//ramochka();
	a1();
}
