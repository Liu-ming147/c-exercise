#include<stdio.h>
int power(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k >= 1)
	{
		return n * power(n, k-1);
	}
}

void main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", power(n, k));
}