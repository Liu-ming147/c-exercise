#include<stdio.h>
int Fact(int n)
{
	if (n <= 1)
		return 1;
	return n*Fact(n - 1);
}

void main()
{
	int n;
	scanf("%d", &n);
	printf("%d! = %d\n", n, Fact(n));
}