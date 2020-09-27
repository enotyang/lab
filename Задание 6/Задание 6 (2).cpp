#include <stdio.h>
int main()
{
	int A, B, C, t, f;
	scanf_s("%d %d %d", &A, &B, &C);
	t = B;
	f = C;
	C = A;
	A = t;
	B = f;
	printf("%d %d %d\n", A, B, C);
	return(0);
}