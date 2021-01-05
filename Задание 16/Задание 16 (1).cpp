#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, n, arr[1000];
    printf("Введите N: ");
    scanf_s("%d", &n);
    arr[0] = 1;
    for (i = 1; i < n; i++)
        arr[i] = arr[i - 1] + 2;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}