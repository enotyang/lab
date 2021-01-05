#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, arr[1000];
    printf("Введите кол-во элементов N: ");
    scanf("%d", &n);
    printf("Введите элементы массива: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < (n / 2); i++)
        printf("%d %d ", arr[i], arr[n - i - 1]);
    if (n % 2 != 0) printf("%d ", arr[(n / 2)]);
    return 0;
}