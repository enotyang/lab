#include <stdio.h>
#include <math.h>
int main()
{
	int A, t, f;
	scanf_s("%d", &A);
	t = A * A; //2
	f = t * t; //4
	t = t * f; //6
	f = f * f; //8
	A = A * t * f;
	printf("%d", A);
	return(0);
}