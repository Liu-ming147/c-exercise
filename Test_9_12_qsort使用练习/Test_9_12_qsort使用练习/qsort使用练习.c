#include<stdio.h>

size_t compar1(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

size_t compar2(const void *a, const void *b)
{
	return (*(char *)a - *(char *)b);
}

int main()
{
	int ar[] = { 3, 5, 8, 9, 0, 2, 4, 4 };
	char br[] = { 'a', 'y', 'd', 'p', 'e', 'c', 'n' };
	int n1, n2;
	n1 = sizeof(ar) / sizeof(ar[0]);
	n2 = sizeof(br) / sizeof(br[0]);

	qsort(ar, n1, sizeof(int), compar1);
	for (int i = 0; i < n1; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	qsort(br, n2, sizeof(char), compar2);
	for (int j = 0; j < n2; j++)
	{
		printf("%c ", br[j]);
	}
	printf("\n");

	return 0;
}