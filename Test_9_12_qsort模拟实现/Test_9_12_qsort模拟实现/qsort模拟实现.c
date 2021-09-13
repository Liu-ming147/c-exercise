#include<stdio.h>

void Print(int *ar, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", ar[i]);
	printf("\n");
}

int compar(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

void my_qsort(void * base, size_t nitems, size_t size, int(*compar)(const void *, const void *))
{
	int i, j;
	char *ar = (char*)base;
	char tmp[16];
	for (i = 0; i < nitems - 1; i++)
	{
		for (j = 0; j < nitems - 1 - i; j++)
		{
			if (compar(ar + j * size, ar + (j + 1) * size) > 0)
			{
				memcpy(tmp, ar + j * size, size);
				memcpy(ar + j * size, ar + (j + 1) * size, size);
				memcpy(ar + (j + 1) * size, tmp, size);
			}
		}
	}
}


int main()
{
	int ar[] = { 3, 6, 4, 1, 5, 0, 8, 9, 2, 7 };
	int n = sizeof(ar) / sizeof(ar[0]);
	Print(ar, n);
	my_qsort(ar, n, sizeof(int), compar);
	Print(ar, n);

	return 0;
}