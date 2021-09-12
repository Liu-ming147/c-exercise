#include<stdio.h>
void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void main()
{
	int arr[] = {2, 5, 6, 8, 4, 9, 1, 3, 7, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}