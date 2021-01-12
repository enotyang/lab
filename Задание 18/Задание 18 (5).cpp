#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, x, max = 0, min = 0, a[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива A: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            x = a[i + 1];
            a[i + 1] = a[i];
            a[i] = x;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}