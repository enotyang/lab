#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Rus");
	float a, b, sa;
	printf("Введите числа: ");
	scanf_s("%f %f", &a, &b);
	sa = (a + b) / 2;
	printf("Среднее арифметическое = %f", sa);
	return 0;

}
