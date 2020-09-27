#include <stdio.h>
int main()
{
	int A, B, t;
	scanf_s("%d %d", &A, &B);
	t = A;
	A = B;
	B = t;
	printf("%d %d\n", A, B);
	return(0);
}