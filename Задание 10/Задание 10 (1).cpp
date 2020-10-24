#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	printf("Введите числа A и B ");
	scanf_s("%d %d", &a, &b);
	if (a > 2 && b <= 3) {
		printf("Неравенства A > 2 и B <= 3 справедливы для введеных значений");
	}
	else {
		printf("Неравенства A > 2 и B <= 3 не справедливы для введеных значений");
	}
	return(0);
}
