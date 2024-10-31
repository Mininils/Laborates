#include <stdio.h>
#include <locale.h>
#define N 10
#define step 0,5

double* full_elements(double* ptr_array, int n) {
	for (int i = 0; i < N; i++) {
		for (float x = 0.15; x <= 2.1; x += step) {
			ptr_array[i] = (x - 3 * pow(cos(1.04 * x), 2));
		}
	}
}

int put_elements(double* ptr_array, int n) {
	printf("�������� �������");
	for (int i = 0; i < N; i++) {
		printf("%.f", ptr_array[i]);
	}
}


double* calc_elements(double* ptr_array, int n) {
	int cnt;
	float sum = 0;
	for (int i = 0; i < N; i++) {
		if (ptr_array[i] != 0) {
			sum += ptr_array[i];
			cnt++;
		}
	}
	if (cnt > 0) {
		float average = (float)sum / cnt;
		printf("������� �������������� ��������� ���������: %.2f\n", average);
	}
	else {
		printf("��� ��������� ��������� ��� ���������� �������� ���������������.\n");
	}
}





int main()
{
	setlocale(LC_ALL, "rus");
	int size;
	printf("������� ������ ������� > ");
	scanf("%d", &size);

	double array[N];
	full_elements(array, size);
	put_elements(array, size);
	//��������� ��������� ������� � ������
}