#include<stdio.h>
#include<math.h>
int main()
{
	for (int i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		if (sum == i)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}