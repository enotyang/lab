#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, d, maxi, arr[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++) 
        scanf_s("%d", &arr[i]);
    maxi = i;
    for (i = 1; i < n; i++)
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) maxi = i + 1;
    printf("Последний локальный максимум : %d", maxi);
    return 0;
}