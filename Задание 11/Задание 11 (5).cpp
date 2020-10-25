#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int x;
	printf("Введите число ");
	scanf_s("%d", &x);
	if (x == 0) printf("Нулевое");
	else {
		if (x > 0) printf("Положительное ");
		else printf("Отрицательное ");
		if (x % 2 == 0) printf("четное");
		else printf("нечетное");
	}
	return 0;
}