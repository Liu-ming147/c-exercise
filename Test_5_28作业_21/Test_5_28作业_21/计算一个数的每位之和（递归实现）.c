#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	return n;
}

void main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", DigitSum(num));
}