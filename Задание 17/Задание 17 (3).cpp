#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, d, min, arr[1000];
    printf("Введите кол-во элементов N: "); 
    scanf_s("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++) 
        scanf_s("%d", &arr[i]);
    min = arr[1];
    for (i = 1; i < n; i = i + 2)
        if (arr[i] < min) min = arr[i];
    printf("Минимальный элемент с четным номером: %d", min);
    return 0;
}