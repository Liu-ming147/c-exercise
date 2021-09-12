#include<stdio.h>
int fun(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d¸ö1\n", fun(n));
	return 0;
}