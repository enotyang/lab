#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	float p;
	printf("Введите значение угла в градусах (0 < a < 360) ");
	scanf_s("%d", &a);
	p = a * 3.14 / 180;
	printf("Значение угла в радианах = %f", p);
	return(0);
}