#include <stdio.h>
#include <locale.h>
int task1()
{
	char c;

	printf("������� ������� ����� ��� ����� (a ��� b ��� c): ");
	scanf("%c", &c);//���������� � �������
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
		printf("������� �����.\n");
		break;
	case 'a':
	case 'b':
	case 'c':
		printf("������� �����.\n");
		break;
	default:
		printf("������ � �� �����, � �� �����\n");
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
		printf("�������� ����� x � y = %f", s);
		break;
	case '-':
		printf("�������� ����� x � y = %f", r);
		break;
	case '/':
		printf("������� ����� x �� y = %f", d);
		break;
	case '*':
		printf("��������� ����� x �� y = %f", u);
		break;
	default:
		printf("������ �����");
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	//task1();
	task2();

}