#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int N, R;
	printf("Введите кол-во секунд, прошедших с начала суток ");
	scanf_s("%d", &N);
	R = N % 60;
	printf("Количество секунд, прошедших с начала последней минуты = %d", R);
	return(0);
}