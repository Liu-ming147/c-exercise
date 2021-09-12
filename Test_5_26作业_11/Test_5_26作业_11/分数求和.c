#include<stdio.h>
void main()
{
	int flag = 1;
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
}