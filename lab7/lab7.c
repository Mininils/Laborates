#include <stdio.h>
#include <locale.h>
int task1()
{
	char c;

	printf("Введите символы цифру или букву (a или b или c): ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("Введена цифра.\n");
		break;
	case 'a':
	case 'b':
	case 'c':
		printf("Введена буква.\n");
		break;
	default:
		printf("Введен и не цифра, и не буква\n");
	}
	return 0;
}
int task2()
{
	float x, y;
	char c;

	scanf("%f %c %f", &x, &c, &y);
	float s = x + y;
	float r = x - y;
	float u = x * y;
	float d = x / y;
	switch (c) 
	{
	case '+':
		printf("Сложение чисел x и y = %f", s);
		break;
	case '-':
		printf("Разность чисел x и y = %f", r);
		break;
	case '/':
		printf("Деление чисел x на y = %f", d);
		break;
	case '*':
		printf("Умножение чисел x на y = %f", u);
		break;
	default:
		printf("Ошибка ввода");
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	//task1();
	task2();

}