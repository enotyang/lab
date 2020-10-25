#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y, k;
	printf("Введите координаты точки ");
	scanf_s("%d %d", &x, &y);
	if (x > 0) {
		if (y > 0) k = 1;
		else k = 4;
	}
	else {
		if (y > 0) k = 2;
		else k = 3;
	}
	printf("Точка находится в %d четверти", k);
	return 0;
}