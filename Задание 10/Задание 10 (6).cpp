#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	printf("Введите стороны треугольника ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
			printf("Треугольник является прямоугольным");
	}
	else {
		printf("Треугольник не является прямоугольным");
	}
	return(0);
}
