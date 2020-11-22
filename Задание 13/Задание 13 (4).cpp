#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int i, n;
	float a, r = 1;
	printf("Введите a: ");
	scanf_s("%f", &a);
	printf("Введите целое N: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		r = r + pow(a, i);
	}
	printf("Значение выражения = %f", r);
	return 0;
}