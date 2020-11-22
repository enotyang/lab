#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	float r = 1, k = 1.1;
	int i, n;
	printf("Введите целое N: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		r = r * k; 
		k = k + 0.1;
	}
	printf("Произведение = %f", r);
	return 0;
}