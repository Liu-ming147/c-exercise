#include<stdio.h>
void Print_num(int value)
{
	if (value > 9)
	{
		Print_num(value / 10);
	}
	printf("%d ", value % 10);
}

void main()
{
	int num;
	scanf("%d", &num);
	Print_num(num);
}