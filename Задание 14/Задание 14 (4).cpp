#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	float p, s = 1000;
	printf("Введите P: ");
	scanf_s("%f", &p);
	while (s <= 1100) {
		k++;
		s = s + s * p / 100;
	}
	printf("%d %f", k, s);
	return 0;
}