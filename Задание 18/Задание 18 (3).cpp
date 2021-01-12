#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, x, a[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива A: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0) x = a[i];  
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) a[i] = a[i] + x;
        printf("%d ", a[i]);
    }
    return 0;
}