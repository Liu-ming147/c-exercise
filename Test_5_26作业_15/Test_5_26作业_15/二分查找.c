#include<stdio.h>
void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1; // rightλ�õ����ݿ���ȡ��

	while (left <= right) // rightλ�������ݣ�����Ҫ���=��
	{
		int mid = left + (right - left) / 2;
		if (arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
		{
			right = mid - 1; // rightλ�õ����ݿ���ȡ�������right=mid-1
		}
		else if (arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
		{
			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if (left>right)
		printf("�Ҳ���\n");
}