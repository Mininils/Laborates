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
	puts("������� ������ �����");
	scanf("%d", &num);
	puts("������� ����� �");
	int nam;
	puts("������� ������ �����");
	scanf("%d", &nam);
	puts("������� ����� �");
	printf("����� ����� %d � %d = %i",num, nam, num + nam );
	printf("\n�������� ����� %d � %d = %i", num, nam, num - nam);
	printf("\n������������ ����� %d � %d = %i",num, nam, num * nam);
	printf("\n������� �� ������� %d �� %d = %i, ������� �� ������� ������� ����� �� ������ = %i", nam, num, nam/num, nam % num);


}

int task2()
{
	int dym;
	int a;
	float result;
	printf("������� �������� ��� ��������");
	scanf("%d", &a);

}
