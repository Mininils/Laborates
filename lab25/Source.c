#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#define XMAX 2
#define RAND_MAX 10

int task1() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	
	int m = 1 + rand() % XMAX;

    int k;
	puts("Введите 'орёл' или 'решка': ");
	scanf("%с", &k);
	
	if (m == 1) {
		printf("Выпал ОРЁЛ\n");
	}
	else {
		printf("Выпала РЕШКА\n");
	}
}

int* rand10(int mmax){
    return 1 + rand() % mmax; 
}

double rand_double(double dmin, double dmax) {
    double rand_value = rand() / (RAND_MAX * (dmax - dmin) + dmin);
    return rand_value;
}

int* rand10n(int n, int mmax) {
    int* arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = rand10(mmax);
    }
    return arr; 
}


double* rand_double_n(int n, double dm) {
    double* arr = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        arr[i] = rand_double(-dm, dm);
    }
    return arr; 
}


int task2() {
    srand(time(0)); 

    int mmax, n;
    double dm;

    printf("Введите максимальное значение для целых чисел (mmax): ");
    scanf("%d", &mmax);
    printf("Введите количество целых чисел для генерации (n): ");
    scanf("%d", &n);
    printf("Введите диапазон для вещественных чисел (dm): ");
    scanf("%lf", &dm);

    int* int_array = rand10n(n, mmax);
    printf("Сгенерированные целые числа: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    double* double_array = rand_double_n(n, dm);
    printf("Сгенерированные вещественные числа: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", double_array[i]);
    }
    printf("\n");

    free(int_array);
    free(double_array);
}




int main() {
    setlocale(LC_ALL, "rus");
	//task1();
	task2();
}