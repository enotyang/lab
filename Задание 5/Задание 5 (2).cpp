#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, ac, bc, sum;
	printf("Введите точку A\n");
	scanf_s("%d", &a);
	printf("Введите точку B\n");
	scanf_s("%d", &b);
	printf("Введите точку C\n");
	scanf_s("%d", &c);
	ac = abs(a - c);
	bc = abs(b - c);
	sum = ac + bc;
	printf("Длина AC = %d\nДлина BC = %d\nСумма длин AC и BC = %d\n", ac, bc, sum);
	return 0;
}
