#include <stdio.h>
#include <locale.h>
#define N 3
#define P 10
int task1()
{
	float A[N];
    float temp, sum = 0;
    float B[N];
    for (int i = 0; i < N; i++){
        printf("a[%d] = ", i);
        scanf("%f", &temp);
        A[i] = temp;
        B[i] = temp - P;
        sum += A[i];
    }
    printf("\n| индекс | исходное значение | новое значение");
    for (int i = 0; i < N; i++) {
        printf("\n  %d\t\t%.2f\t\t   %.2f", i, A[i], B[i]);
    }
    printf("\nСреднее арифметическое массива = %.2f", sum / N);
    
}
int main()
{
	setlocale(LC_ALL, "rus");
	task1();
}