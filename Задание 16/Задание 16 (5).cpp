#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, arr[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);
    for (i = 0; i < n; i++)
        if (i % 2 != 0) printf("%d ", arr[i]);
    for (i = n - 1; i >= 0; i--)
        if (i % 2 == 0) printf("%d ", arr[i]);
    return 0;
}