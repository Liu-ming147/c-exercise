#include<stdio.h>
void yangHuiTriangle(int n)
{
	int data[30] = { 1 };

	int i, j;
	printf("1\n"); 
	for (i = 1; i < n; i++) 
	{
		for (j = i; j > 0; j--) 
		{
			data[j] += data[j - 1]; 
		}

		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[j]);
		}
		putchar('\n');
	}
}
void main()
{
	int n;
	scanf("%d", &n);
	yangHuiTriangle(n);
}