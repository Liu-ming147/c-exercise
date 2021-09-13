#include<stdio.h>

int main()
{
	int a[3][3] = { 1, 3, 4, 2, 5, 6, 7, 8, 9 };
	int k, flg;
	flg = 0;
	scanf("%d", &k);
	int i = 0, j = 2;
	while (j >= 0 && i < 3)
	{
		if (a[i][j] < k)
		{
			i++;
		}
		else if (a[i][j] > k)
		{
			j--;
		}
		else
		{
			flg = 1;
			break;
		}
	}
	if (flg == 1)
		printf("It has been found!\n");
	else
		printf("It hasn't been found!\n");

	return 0;
}