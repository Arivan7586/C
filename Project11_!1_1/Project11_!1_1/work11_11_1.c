#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɲ�������Ϸ��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void menu()
{
	printf("*********************************\n");
	printf("************* 1.play ************\n");
	printf("************* 0.exit ************\n");
	printf("*********************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1; //ȡ0-100֮�������һ������
	int input = 0;
	while (1)
	{
		printf("������µ�����>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���!\n");
		}
		else if (input < random_num)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//������������ĳ�ʼ������
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	}
	while (input);
	system("pause");
	return 0;
}

//int main()
//{
//	srand((unsigned)time(NULL));
//	int random = 0;
//		//random = rand()%100;
//		for (int i = 1; i <= 100;i++)
//		{			
//			random = rand() % 100 + 1;
//			printf("%d ", random);
//		}
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int start = 1;
//	while (start)
//	{
//		printf("��ѡ��\n");
//		printf("*******************\n");
//		printf("**** 1 ��ʼ��Ϸ****\n");
//		printf("**** 0 �˳���Ϸ****\n");
//		printf("*******************\n");
//		scanf_s("%d", &start);
//		switch (start)
//		{
//		case 1:
//		{      int random;
//		int input;
//		printf("*****��Ϸ��ʼ*****\n");
//		srand((unsigned)time(NULL));
//		random = rand() % 100;
//		input = 0;
//		while (1)
//		{
//			printf("��¶��٣�\n");
//			scanf("%d", &input);
//			if (input > random)
//			{
//				printf("��´���\n");
//			}
//			else if (input < random)
//			{
//				printf("���С��\n");
//			}
//			else
//			{
//				printf("��¶��ˣ�\n");
//				printf("��ϲ����\n");
//				Sleep(1000);
//				printf("\n\n");
//				break;
//			}
//		}
//		break;
//		}
//		case 0:
//		{
//				  return 0;
//		}
//		default:
//		{
//				   printf("ѡ�����\n");
//				   break;
//		}
//		}
//	}
//	return 0;
//}