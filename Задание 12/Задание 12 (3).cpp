#include <stdio.h>
#include <locale.h>
int main() {
	int v;
	setlocale(LC_ALL, "Rus");
	printf("Введите число от 10 до 40, чтобы вывести строку-описание кол-ва заданий ");
	scanf_s("%d", &v);
	switch ((v / 10) % 10) {
	case 1: switch (v % 10)
	{
	case 0: printf("десять учебных заданий "); break;
	case 1: printf("одиннадцать учебных заданий "); break;
	case 2: printf("двенадцать учебных заданий "); break;
	case 3: printf("тринадцать учебных заданий "); break;
	case 4: printf("четырнадцать учебных заданий "); break;
	case 5: printf("пятнадцать учебных заданий "); break;
	case 6: printf("шестнадцать учебных заданий "); break;
	case 7: printf("семнадцать учебных заданий "); break;
	case 8: printf("восемнадцать учебных заданий "); break;
	case 9: printf("девятнадцать учебных заданий "); break;
	}
		  break;
	case 2: printf("двадцать "); break;
	case 3: printf("тридцать "); break;
	case 4: printf("сорок "); break;
	}
	if (v / 10 != 1) {
		switch (v % 10) {
		case 1: printf("одно "); break;
		case 2: printf("два "); break;
		case 3: printf("три "); break;
		case 4: printf("четыре "); break;
		case 5: printf("пять "); break;
		case 6: printf("шесть "); break;
		case 7: printf("семь "); break;
		case 8: printf("восьмь "); break;
		case 9: printf("девять "); break;
		}
		switch (v % 10) {
		case 1: printf("учебное задание"); break;
		case 2:
		case 3:
		case 4: printf("учебных задания"); break;
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: printf("учебных заданий"); break;
		}
	}
	return 0;
}