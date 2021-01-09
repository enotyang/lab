#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, j, n, xi, xj, arr[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++)
            if (arr[i] == arr[j]) {
                xi = i + 1;
                xj = j + 1;
            }
    }
    printf("Номера одинаковых элементов: %d и %d", xi, xj);
    return 0;
}