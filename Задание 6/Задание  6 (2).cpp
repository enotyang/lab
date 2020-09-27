#include <stdio.h>
int main()
{
	int A, B, C, t, f;
	scanf_s("%d %d %d", &A, &B, &C);
	t = A;
	f = C;
	C = B;
	A = f;
	B = t;
	printf("%d %d %d\n", A, B, C);
	return(0);
}