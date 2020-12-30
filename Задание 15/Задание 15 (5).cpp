#include <stdio.h>
#include <locale.h>
float Fact2(int N) {
    int R = 1;
    while (N > 0) {
        R = R * N;
        N = N - 2;
    }
    return R;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int i, N;
    for (i = 1; i <= 5; i++) {
        printf("Введите N: ");
        scanf_s("%i", &N);
        printf("N!! = %f\n", Fact2(N));
    }
    return 0;
}