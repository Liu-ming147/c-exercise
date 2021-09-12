#include<stdio.h>
void main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	while (c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
}