#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k = 0, a = 1, b = 1, f = 0;
	printf("Введите число Фибоначчи: ");
	scanf_s("%d", &n);
	while (f < n) {
		a = f;
		f = a + b;
		b = a;
		k++;
	}
	printf("%d", k);
	return 0;
}