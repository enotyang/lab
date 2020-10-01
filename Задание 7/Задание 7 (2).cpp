#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	float p;
	printf("Введите значение угла в радианах (0 < a < 2*pi) ");
	scanf_s("%d", &a);
	p = a / 3.14 * 180;
	printf("Значение угла в градусах = %f", p);
	return(0);
}