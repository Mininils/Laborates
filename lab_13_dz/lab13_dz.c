#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

#define MAX_LENGTH 100

void dz() {
    char text[MAX_LENGTH];
    printf("¬ведите строку: ");
    fgets(text, MAX_LENGTH, stdin);
    char len = strlen(text);

    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
        len--;
    }
    if (len > 0 && text[len - 1] != '.') {
        strcat(text, ".");
    }

    printf("–езультат: %s\n", text);
}

int main() {
    setlocale(LC_ALL, "rus");
    dz();
}
