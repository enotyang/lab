#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int v1, v2, s, t, ss;
	printf("Введите скорость 1 автомобиля ");
	scanf_s("%d", &v1);
	printf("Введите скорость 2 автомобиля ");
	scanf_s("%d", &v2);
	printf("Введите расстояние между ними в данный момент ");
	scanf_s("%d", &s);
	printf("Введите время ");
	scanf_s("%d", &t);
	ss = (v1 + v2) * t + s;
	printf("Через %d часов между автомобилистами будет %d км\n", t, ss);
	return(0);
}