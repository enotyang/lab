#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b;
	float k;
	printf("Введите A и B (A > B) ");
	scanf_s("%d %d", &a, &b);
	k = float(a) / b;
	printf("Количество отрезков B, размещенных на отрезке A = %f", round(k));
	return 0;
}