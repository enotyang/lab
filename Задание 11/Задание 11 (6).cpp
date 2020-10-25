#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int x;
	printf("Введите число от 1 до 999 ");
	scanf_s("%d", &x);
	if (x % 2 == 0) printf("Четное ");
	else printf("Нечетное ");

	if (x / 100 >= 1) printf("трехзначное ");
	else if (x / 10 >= 1) printf("двузначное ");
	else printf("однозначное ");

	if (x > 0) printf("положительное ");
	else printf("отрицательное ");
	return 0;
}