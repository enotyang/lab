#include <stdio.h>
#include <locale.h>
int Quarter(int x, int y) {
    if (x > 0)
        if (y > 0) return 1;
        else return 4;
    else
        if (y > 0) return 2;
        else return 3;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int i, x, y;
    for (i = 1; i <= 3; ++i) {
        printf("Введите x и y: ");
        scanf_s("%i %i", &x, &y);
        printf("Quarter = %i\n", Quarter(x, y));
    }
    return 0;
}