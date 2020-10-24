#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a;
	printf("Введите число ");
	scanf_s("%d", &a);
	if (a % 2 == 0 && a > 9 && a < 100) {
		printf("Данное число является четным двузначным");
	}
	else {
		printf("Данное число не является четным двузначным");
	}
	return(0);
}
