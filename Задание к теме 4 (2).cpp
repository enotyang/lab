#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Rus");
	float d, L;
	printf("Введите диаметр окружности: ");
	scanf_s("%f", &d);
	L = 3.14 * d;
	printf("L = %f", L);
	return 0;

}