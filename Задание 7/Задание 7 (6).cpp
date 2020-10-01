#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	float a1, b1, c1, a2, b2, c2, x, y;
	printf("Дана система уравнений:\nA1 * x + B1 * y = C1\nA2 * x + B2 * y = C2\nВведите значения A1, B1, C1, A2, B2, C2\n");
	scanf_s("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
	x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
	y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	printf("x = %f\ny = %f\n", x, y);
	return(0);
}