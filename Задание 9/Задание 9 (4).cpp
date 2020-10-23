#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int A, B, C, K, N;
	printf("Введите стороны A и B прямогуольника ");
	scanf_s("%d %d", &A, &B);
	printf("Введите сторону C квадрата ");
	scanf_s("%d", &C);
	K = (A * B) / (C * C);
	N = (A * B) % (C * C);
	printf("Количество квадратов, размещенных на прямоугольнике = %d\nПлощадь незанятой части прямоугольника = %d", K, N);
	return 0;
}