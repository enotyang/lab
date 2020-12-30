#include <stdio.h>
#include <locale.h>
float PowerA3(float a, float *b) {
	return *b = a * a * a;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int i;
    float a, b;
    for (i = 1; i <= 5; i++) {
        printf("Введите A: ");
        scanf_s("%f", &a);
        b = PowerA3(a, &b);
        printf("Куб числа A: %f\n", b);
    }
    return 0;
}