#include<stdio.h>
//ð������
void BubbleSort(int* arr, int n)
{
	int end = n;
	//����
	while (end > 0)
	{
		int flag = 0;
		for (int i = 1; i < end; ++i)
		{
			if (arr[i - 1] > arr[i])
			{
				int tem = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tem;
				flag = 1;
			}
		}
		if (flag = 0)
		{
			break;
		}
		--end;
	}
}
//�ҵ���
single(int* arr, int n)
{
	//������ڵ����������i+2��������ڵ������������i+1
	printf("����Ϊ��");
	for (int i = 0; i < n;)
	{
		if (arr[i] == arr[i + 1])
		{
			i += 2;
		}
		else
		{
			printf("%d ", arr[i]);
			++i;
		}
	}
	printf("\n", n);
}
int main()
{
	int arr[] = { 18, 10, 1, 1, 8, 2, 9, 9, 3, 4, 4, 8, 6, 6, 12, 12, 10 };
	int n = sizeof(arr) / sizeof(int);
	BubbleSort(arr, n);
	single(arr, n);
	return 0;
}
