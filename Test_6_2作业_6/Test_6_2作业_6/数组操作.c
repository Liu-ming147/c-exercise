#include<stdio.h>
void init(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int size)
{
	int left = 0, right = size - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	reverse(arr, size);
	print(arr, size);
	init(arr, size);
	print(arr, size);
}