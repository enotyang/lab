#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, x2, x3, y1, y2, y3;
	float S, P, D12, D13, D23;
	printf("Введите координаты 1 точки\n");
	scanf_s("%d %d", &x1, &y1);
	printf("Введите координаты 2 точки\n");
	scanf_s("%d %d", &x2, &y2);
	printf("Введите координаты 3 точки\n");
	scanf_s("%d %d", &x3, &y3);
	S = 0.5 * abs((x1 - x3) * (y2 - y3) - (y1 - y3) * (x2 - x3));
	D12 = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	D13 = sqrtf((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	D23 = sqrtf((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	P = D12 + D13 + D23;
	printf("S = %f\nP = %f\n", S, P);
	return 0;
}
