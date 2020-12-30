#include <stdio.h>
#include <locale.h>
int Sign(int x) {
    if (x < 0) x = -1;
    if (x == 0) x = 0;
    if (x > 0) x = 1;
    return x;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int r;
    float a, b;
    printf("Введите A и B: ");
    scanf_s("%f %f", &a, &b);
    r = Sign(a) + Sign(b);
    printf("Sign(A) + Sign(B): %d\n", r);
    return 0;
}