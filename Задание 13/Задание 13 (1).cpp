#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	float x, i, s;
	printf("Цена за кг: ");
	scanf_s("%f", &x);
	for (i = 0.1; i < 1.1; i = i + 0.1) {
		s = x * i;
		printf("Стоимость %f кг = %f\n", i, s);
	}
	return 0;
}