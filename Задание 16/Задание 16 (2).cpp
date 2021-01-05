#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, a, d, n, r, arr[1000];
    printf("Введите первый член A, знаменатель D и кол-во элементов N: ");
    scanf_s("%d %d %d", &a, &d, &n);
    arr[0] = a;
    for (i = 1; i < n; i++)
        arr[i] = arr[i - 1] * d;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}