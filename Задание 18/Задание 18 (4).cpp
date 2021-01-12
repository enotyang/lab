#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, max = 0, min = 0, a[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива A: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (i = 0; i < n; i++) {
        if (a[i] > a[max]) max = i;
        if (a[i] < a[min]) min = i;
    }
    if (min > max) 
        for (i = max + 1; i < min; i++)
            a[i] = 0;
    else
        for (i = min + 1; i < max; i++)
            a[i] = 0;
    for (i = 0; i < n; ++i) 
        printf("%d ", a[i]);
    return 0;
}