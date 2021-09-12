#include<stdio.h>

int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", Max(a, b));
}