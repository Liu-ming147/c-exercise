#include<stdio.h>
void Swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("����ǰ��%d %d\n", a, b);
	Swap(&a, &b);
	printf("������%d %d\n", a, b);
}