#include <stdio.h>
#include <locale.h>
int task1()
{
	printf("¬ведите число\n");
	int a, b;
	int base = 1;
	int k = 1;
	int num = 0;
	int x = 0, s = 0, l = 0;
	scanf("%d", &a);
	//printf("¬ведите шаг\n");
	//scanf("%d", &k);
	for (int cnt = 1; cnt < 4; cnt++) {
	while (a > 0) {
		b = a % 10;
		a = (int)a / 10;
		s = l * k;
		b = (b + s) % 10;
		num += b * base;
		base = base * 10;
		l++;
	}
	printf("%d ", num);
	a = num;
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	task1();
}