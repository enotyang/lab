#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Rus");
	float a, b, sum, raz, pr, ch;
	printf("Введите 2 числа: ");
	scanf_s("%f %f", &a, &b);
	sum = a * a + b * b;
	raz = a * a - b * b;
	pr = a * a * b * b;
	ch = (a * a) / (b * b);
	printf("Сумма квадратов чисел = %f\nРазность квадратов чисел = %f\nПроизведение квадратов чисел = %f\nЧастное квадратов чисел = %f", sum, raz, pr, ch);
	return 0;

}
