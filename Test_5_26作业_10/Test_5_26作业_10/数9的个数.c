#include<stdio.h>
void main()
{
	int a, b, i, count = 0;
	for (i = 1; i <= 100; i++)
	{
		a = i % 10;
		b = i / 10;
		if (a == 9)
			count++;
		if (b == 9)
			count++;
	}
	printf("count = %d\n", count);
}