#include<stdio.h>
int Judge_leapyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
	{
		return 1;
	}
	return 0;
}

void main()
{
	int year;
	scanf("%d", &year);
	if (Judge_leapyear(year) == 1)
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);
}