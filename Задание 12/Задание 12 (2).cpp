#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	char c;
	//N — север, W — запад, S — юг, E — восток
	//0 — продолжать движение, 1 — поворот налево, −1 — поворот направо
	printf("Введите исходное направление робота и посланную ему команду ");
	scanf_s("%c", &c);
	scanf_s("%d", &n);
	switch (n) {
	case -1: switch (c) {
	case 'N': c = 'E'; break;
	case 'S': c = 'W'; break;
	case 'W': c = 'N'; break;
	case 'E': c = 'S'; break;
	} break;
	case 0: switch (c) {
	case 'N': c = 'N'; break;
	case 'S': c = 'S'; break;
	case 'W': c = 'W'; break;
	case 'E': c = 'E'; break;
	} break;
	case 1: switch (c) {
	case 'N': c = 'W'; break;
	case 'S': c = 'E'; break;
	case 'W': c = 'S'; break;
	case 'E': c = 'N'; break;
	} break;
	}
	printf("Направление робота после выполнения полученной команды: %c", c);
	return 0;
}