#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int n, r = 0, i;
	printf("Введите целое N: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		r = r + (2 * i - 1);
	}
	printf("Квадрат %d = %d", n, r);
	return 0;
}