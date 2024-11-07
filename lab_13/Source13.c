#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFUNES
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
	setlocale(LC_ALL, "rus");
	system("chep 1251");
	puts("lab13");
	char Snew[40] = "Привет, ";
	char Name[10];
	puts("Введите своё имя");
	scanf("%s", Name);
	for (int i = 0; i < 20; i++) {
		Name[i] = toupper(Name[i]);
		Snew[i] = toupper(Snew[i]);
	}

	strcat(Snew, Name);
	int x = 40 - strlen(Snew);
	for (int i = 0; i < x+1; i++) {
		strcat(Snew, "!");
	}
	printf("%s!", Snew);
	
}