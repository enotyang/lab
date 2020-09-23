#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Rus");
	float a, b, sum, raz, pr, ch;
	printf("Введите 2 числа: ");
	scanf_s("%f %f", &a, &b);
	sum = fabsf(a) + fabsf(b);
	raz = fabsf(a) - fabsf(b);
	pr = fabsf(a) * fabsf(b);
	ch = fabsf(a) / fabsf(b);
	printf("Сумма модулей чисел = %f\nРазность модулей чисел = %f\nПроизведение модулей чисел = %f\nЧастное модулей чисел = %f", sum, raz, pr, ch);
	return 0;

}
