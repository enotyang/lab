#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, a1, a2;
	printf("Введите двузначное число: ");
	scanf_s("%d", &a);
	a1 = a % 10;
	a2 = a / 10;
	printf("%d%d", a1, a2);
	return 0;
}
