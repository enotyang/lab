#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, x, a[1000], b[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива A: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    printf("Введите элементы массива B: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &b[i]);
    for (i = 0; i < n; i++) {
        x = a[i];
        a[i] = b[i];
        b[i] = x;   
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}