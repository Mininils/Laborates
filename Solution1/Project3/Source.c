#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	printf("Задание 1");
	puts("\n---------");
	printf("123\n");
	printf("\n");
	printf("\n");
	printf("1\n2\n3\n");
	printf("\n");
	printf("\n");
	printf("1\n\t2\n\t\t3\n");
	printf("\n");
	printf("%i\n%2i\n%3i\n%4i", 1, 2, 3, 4);
	printf("\n");
	printf("\n");
	printf("%10.5f\n ", 12.234657);
	printf("\n");
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("\n");
	printf("Умножение %d на %d равно %d", 2000, 4, 2000 * 4);
	printf("\n");
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
	printf("\n");
	printf("\n");
	printf("Задание 2");
	puts("\n---------");


}