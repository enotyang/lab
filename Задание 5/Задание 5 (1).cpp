#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2;
	float R;
	printf("Введите координаты 1 точки\n");
	scanf_s("%d %d", &x1, &y1);
	printf("Введите координаты 2 точки\n");
	scanf_s("%d %d", &x2, &y2);
	R = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("Расстояние между точками = %f\n", R);
	return 0;
}
