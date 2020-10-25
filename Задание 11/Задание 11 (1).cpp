#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("Введите значения A и B ");
	scanf_s("%d %d", &a, &b);
	if (a != b) {
		if (a > b) b = a;
		else a = b;
	}
	else {
		a = 0;
		b = 0;
	}
	printf("a = %d\nb = %d ", a, b);
	return 0;
}