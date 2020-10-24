#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int x, a, b, c;
	printf("Введите трехзначное число ");
	scanf_s("%d", &x);
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	if ((a > b && b > c) || (a < b && b < c)) {
			printf("Цифры данного числа образуют возрастающую или убывающую последовательность");
	}
	else {
		printf("Цифры данного числа не образуют возрастающую или убывающую последовательность");
	}
	return(0);
}
