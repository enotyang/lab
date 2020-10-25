#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, r;
	printf("Введите значения A, B и C ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (abs(a - b) < (abs(a - c))) {
		r = abs(a - b);
		printf("Точка B ближе к A\nРасстояние между данными точками = %d", r);
	}
	else {
		r = abs(a - c);
		printf("Точка C ближе к A\nРасстояние между данными точками = %d", r);
	}
	return 0;
}