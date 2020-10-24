#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	printf("Введите числа A, B и С ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b && b < c) {
		printf("Двойное неравенство A < B < C справедливо для введенных значений");
	}
	else {
		printf("Двойное неравенство A < B < C не справедливо для введенных значений");
	}
	return(0);
}
