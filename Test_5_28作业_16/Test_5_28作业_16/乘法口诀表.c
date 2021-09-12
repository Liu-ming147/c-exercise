#include<stdio.h>
void Mul_table(int i)
{
	int j, k;
	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf("%2d*%2d=%2d ", k, j, j*k);
		}
		printf("\n");
	}
}

void main()
{
	int n;
	scanf("%d", &n);
	Mul_table(n);
}