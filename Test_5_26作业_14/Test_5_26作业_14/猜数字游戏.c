#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int num = 1;
	while (1)
	{
		printf("�²������Ƕ��٣�");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}
void main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}