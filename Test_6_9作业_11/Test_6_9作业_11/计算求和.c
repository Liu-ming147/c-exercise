#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d", &a);
	for (i = 0; i<5; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}