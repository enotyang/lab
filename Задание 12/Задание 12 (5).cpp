#include <stdio.h>
#include <locale.h>
int main() {
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Введите год ");
	scanf_s("%d", &x);
	printf("год ");
	switch (x % 10) {
	case 0: 
	case 1: printf("бел"); break;
	case 2: 
	case 3: printf("черн"); break;
	case 4: 
	case 5: printf("зелен"); break;
	case 6: 
	case 7: printf("красн"); break;
	case 8: 
	case 9: printf("желт"); break;
	}
	switch (x % 12) {
	case 0: 
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11: printf("ой "); break;
	case 6:
	case 7:
	case 8: printf("ого "); break;
	}
	switch (x % 12) {
	case 0: printf("обезьяны"); break;
	case 1: printf("курицы"); break;
	case 2: printf("собаки"); break;
	case 3: printf("свиньи"); break;
	case 4: printf("крысы"); break;
	case 5: printf("быка"); break;
	case 6: printf("тигра"); break;
	case 7: printf("зайца"); break;
	case 8: printf("дракона"); break;
	case 9: printf("змеи"); break;
	case 10: printf("лошади"); break;
	case 11: printf("овцы"); break;
	}
	return 0;
}