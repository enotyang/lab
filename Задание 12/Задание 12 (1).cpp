#include <stdio.h>
#include <locale.h>
int main() {
	int d, m;
	setlocale(LC_ALL, "Rus");
	printf("Введите дату и месяц в виде цифр ");
	scanf_s("%d %d", &d, &m);
	switch ((d / 10) % 10) {
	case 1: switch (d % 10)
	{
	case 0: printf("десятое "); break;
	case 1: printf("одиннадцатое "); break;
	case 2: printf("двенадцатое "); break;
	case 3: printf("тринадцатое "); break;
	case 4: printf("четырнадцатое "); break;
	case 5: printf("пятнадцатое "); break;
	case 6: printf("шестнадцатое "); break;
	case 7: printf("семнадцатое "); break;
	case 8: printf("восемнадцатое "); break;
	case 9: printf("девятнадцатое "); break;
	}
		  break;
	case 2: printf("двадцать "); break;
	case 3: printf("тридцать "); break;
	}
	if (d / 10 != 1) {
		switch (d % 10) {
		case 1: printf("первое "); break;
		case 2: printf("второе "); break;
		case 3: printf("третье "); break;
		case 4: printf("четвертое "); break;
		case 5: printf("пятое "); break;
		case 6: printf("шестое "); break;
		case 7: printf("седьмое "); break;
		case 8: printf("восьмое "); break;
		case 9: printf("девятое "); break;
		}
	}
	switch (m) {
	case 1: printf("января"); break;
	case 2: printf("февраля"); break;
	case 3: printf("марта"); break;
	case 4: printf("апреля"); break;
	case 5: printf("мая"); break;
	case 6: printf("июня"); break;
	case 7: printf("июля"); break;
	case 8: printf("августа"); break;
	case 9: printf("сентября"); break;
	case 10: printf("октября"); break;
	case 11: printf("ноября"); break;
	case 12: printf("декабря"); break;
	}
	return 0;
}