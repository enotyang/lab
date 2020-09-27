#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	printf("Дана функция y = 3x^6 - 6x^2 - 7\nВведите x: ");
	scanf_s("%d", &x);
	x = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("y = %d\n", x);
	return 0;
}