#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2, S, P, a, b;
	printf("Введите координаты 1 точки\n");
	scanf_s("%d %d", &x1, &y1);
	printf("Введите координаты 2 точки, противоположной 1\n");
	scanf_s("%d %d", &x2, &y2);
	a = abs(y2 - y1);
	b = abs(x2 - x1);
	S = a * b;
	P = 2 * (a + b);
	printf("S = %d\nP = %d\n", S, P);
	return 0;
}
