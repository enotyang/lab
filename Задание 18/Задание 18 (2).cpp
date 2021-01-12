#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, x, a[1000];
    float s = 0, b[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива A: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (i = 0; i < n; i++) {
        s = s + a[i];
        b[i] = s / (i + 1);
        printf("%f ", b[i]);
    }   
    return 0;
}