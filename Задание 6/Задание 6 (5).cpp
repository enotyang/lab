#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	printf("Дана функция y = 4(x-3)^6 - 7(x-3)^3 + 2 \nВведите x: ");
	scanf_s("%d", &x);
	x = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	printf("y = %d\n", x);
	return 0;
}