#include<stdio.h>
void swapArgs(int * a, int * b) 
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void diveRank(int * p, int n)
{
	if (n >= 5)
	{
		if ((p[1] == 2) + (p[0] == 3) == 1 &&
			(p[1] == 2) + (p[4] == 4) == 1 &&
			(p[2] == 1) + (p[3] == 2) == 1 &&
			(p[2] == 5) + (p[3] == 3) == 1 &&
			(p[4] == 4) + (p[0] == 1) == 1)
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", p[i]);
			}
			putchar('\n');
		}
		return;
	}

	int i;
	for (i = n; i < 5; i++)
	{
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}

int main()
{
	int p[5] = { 1, 2, 3, 4, 5 };

	diveRank(p, 0);

	return 0;
}