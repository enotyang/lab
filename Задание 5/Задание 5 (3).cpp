#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, ac, bc, pr;
	printf("Введите точку A\n");
	scanf_s("%d", &a);
	printf("Введите точку B\n");
	scanf_s("%d", &b);
	printf("Введите точку C, расположенную между A и B\n");
	scanf_s("%d", &c);
	if (a < c, c < b) {
		ac = abs(a - c);
		bc = abs(b - c);
		pr = ac * bc;
		printf("Длина AC = %d\nДлина BC = %d\nПроизведение длин AC и BC = %d\n", ac, bc, pr);
	}
	else
	{
		printf("Точка C расположена не между точками A и B\n");
	}

	return 0;
}
