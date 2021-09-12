#include<stdio.h>
void Exchange_array(int arrA[], int arrB[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int temp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = temp;
	}
}

void main()
{
	int arrA[] = {1, 2, 3, 4, 5};
	int arrB[] = {6, 7, 8, 9, 10};
	int size = sizeof(arrA) / sizeof(arrA[0]);
	Exchange_array(arrA, arrB, size);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arrA[i]);
	}
	printf("\n");
	for (int j = 0; j < size; ++j)
	{
		printf("%d ", arrB[j]);
	}
}