#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, d, c = 0, arr[1000];
    printf("Введите кол-во элементов N: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);
    d = arr[2] - arr[1];
    for (i = 1; i < n; i++)
        if (arr[i] - arr[i - 1] == d) c = c + 1;
    if (n == c + 1) printf("Разность прогрессии = %d", d);
    else printf("0");
    return 0;
}