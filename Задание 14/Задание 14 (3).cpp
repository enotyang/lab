#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 1, r = 1, n;
	printf("Введите N: ");
	scanf_s("%d", &n);
	while (r < n) {
		i++;
		r = r + i;
	}
	printf("%d %d", i, r);
	return 0;
}