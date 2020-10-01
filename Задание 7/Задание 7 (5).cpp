#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, x;
	printf("Дано уравнение Ax + B = 0\nВведите значения A и B ");
	scanf_s("%f %f", &a, &b);
	x = -b / a;
	printf("x = %f", x);
	return(0);
}