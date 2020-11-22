#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	printf("Введите A и B: ");
	scanf_s("%d %d", &a, &b);
	while (a != 0 && b != 0) {
		if (a > b)
			a = a % b;
		else 
			b = b % a;
	}
	printf("%d", a + b);
	return 0;
}