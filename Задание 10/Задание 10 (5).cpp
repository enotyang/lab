#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int x, a, b, c, d;
	printf("Введите четырехзначное число ");
	scanf_s("%d", &x);
	a = x / 1000;
	b = x / 100 % 10;
	c = x % 100 / 10;
	d = x % 10;
	if (a == d && b == c) {
			printf("Данное число читается одинаково слева направо и справа налево");
	}
	else {
		printf("Данное число не читается одинаково слева направо и справа налево");
	}
	return(0);
}
