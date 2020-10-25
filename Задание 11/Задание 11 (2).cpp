#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, s;
	printf("Введите значения A, B и C ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a < b) && (a < c)) s = b + c;
	if ((b < a) && (b < c)) s = a + c;
	if ((c < a) && (c < b)) s = a + b;
	}
	printf("Сумма двух наибольших чисел = %d", s);
	return 0;
}