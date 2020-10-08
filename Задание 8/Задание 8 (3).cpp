#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b;
	float k;
	printf("Введите A и B (A > B) ");
	scanf_s("%d %d", &a, &b);
	k = a - float(b) * round((a / float(b)));
	printf("Длина незанятой части отрезка A = %f", k);
	return 0;
}