#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0, j, a, b;
	printf("Введите A и B: ");
	scanf_s("%d %d", &a, &b);
	while (a - b >= 0) 
		a = a - b;
	printf("%d", a);
	return 0;
}