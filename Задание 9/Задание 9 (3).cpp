#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int K, N, R;
	printf("Введите номер любого дня года ");
	scanf_s("%d", &K);
	printf("Введите номер дня недели, когда было 1 января ");
	scanf_s("%d", &N);
	R = (K % 7 + N - 1) % 7;
	printf("Номер дня недели для %d-го дня года, где 1 января было днем недели с номером %d = %d", K, N, R);
	return 0;
}