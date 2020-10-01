#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y, a;
	float s1, s2;
	printf("Сколько кг конфет вы хотите взять? ");
	scanf_s("%d", &x);
	printf("Сколько рублей запалтили за %d кг конфет? ", x);
	scanf_s("%d", &a);
	printf("Веведите вес (кг) стоимость которого вы хотите узнать ");
	scanf_s("%d", &y);
	s1 = a / x;
	s2 = a * y / x;
	printf("1 кг конфет стоит %f рублей\nЗа %d кг вы заплатите %f рублей\n", s1, y, s2);
	return(0);
}