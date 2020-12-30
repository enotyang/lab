#include <stdio.h>
#include <locale.h>
float RingS(float R1, float R2) {
    return 3.14 * (R1 * R1 - R2 * R2);
}
int main() {
    setlocale(LC_ALL, "Rus");
    int i;
    float R1, R2;
    for (int i = 1; i <= 3; i++) {
        printf("Введите R1 и R2: ");
        scanf_s("%f %f", &R1, &R2);
        printf("S = %f\n", RingS(R1, R2));
    }
    return 0;
}