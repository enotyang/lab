#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int i, a, b, n, arr[1000], s = 0;
    printf("Введите A, D и кол-во элементов N: ");
    scanf_s("%d %d %d", &a, &b, &n);
    arr[0] = a;
    arr[1] = b;
    s = a + b;
    for (i = 2; i < n; i++) {
        arr[i] = arr[i] + s;
        s = s + arr[i];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}