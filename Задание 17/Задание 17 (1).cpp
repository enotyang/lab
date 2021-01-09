#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, k, l, s = 0, arr[1000];
    float c = 0, r;
    printf("Введите K, L и кол-во элементов N: ");
    scanf_s("%d %d %d", &k, &l, &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);
    for (i = k - 1; i <= l - 1; i++) {
        s = s + arr[i];
        c = c + 1;
    }
    r = s / c;
    printf("%f", r);
    return 0;
}