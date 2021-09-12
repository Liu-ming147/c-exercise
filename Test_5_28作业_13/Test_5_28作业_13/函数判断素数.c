#include<stdio.h>
#include<math.h>
int Judge_prime(int x)
{
	for (int i = 2; i < sqrt(x); i++)
	{
		if (0 == x % i)
			return 0;
	}
	return 1;
}

void main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (Judge_prime(i) == 1)
			printf("%d\n", i);
	}
}