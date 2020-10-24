#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	printf("Введите стороны треугольника ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > c) && (b + c > a)) {
			printf("Треугольник с данными сторонами существует");
	}
	else {
		printf("Треугольник с данными сторонами не существует");
	}
	return(0);
}
