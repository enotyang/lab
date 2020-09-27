#include <stdio.h>
#include <math.h>
int main()
{
	int A, t;
	scanf_s("%d", &A);
	A = A * A;
	t = A * A;
	A = t * t;
	printf("%d", A);
	return(0);
}