#include <stdio.h>;
#include <math.h>;
#include <locale.h>;
int main() {
	setlocale(LC_ALL, "Rus");
	float b, k;
	printf("Введите размер файла в байтах: ");
	scanf_s("%d", &b);
	k = b / 1024;
	printf("Размер файла в Кб = %f", ceil(k));
	return 0;
}