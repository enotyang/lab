#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int K, R;
	printf("Введите номер любого дня года ");
	scanf_s("%d", &K);
	R = K % 7;
	printf("Номер дня недели для %d-го дня года = %d", K, R);
	return 0;
}