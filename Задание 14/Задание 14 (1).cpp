#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, a, b;
	printf("Введите A и B: ");
	scanf_s("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", i);
		}
	}
	return 0;
}