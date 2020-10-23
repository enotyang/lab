#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int G;
	float V;
	printf("Введите год ");
	scanf_s("%d", &G);
	V = float(G) / 100;
	printf("Соответствующий век = %f", ceil(V));
	return 0;
}