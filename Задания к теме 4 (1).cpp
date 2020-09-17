#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {

	setlocale(LC_ALL, "Rus");
	float a, b, S, P;
	printf("Введите стороны прямоугольника: ");
	scanf_s("%f %f", &a, &b);
	S = a * b;
	P = 2 * (a + b);
	printf("S = %f\nP = %f", S, P);
	return 0;

}