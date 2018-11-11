#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。

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
	int random_num = rand() % 100 + 1; //取0-100之间随机的一个数；
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了!\n");
		}
		else if (input < random_num)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//随机数发生器的初始化函数
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入!\n");
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
//		printf("请选择：\n");
//		printf("*******************\n");
//		printf("**** 1 开始游戏****\n");
//		printf("**** 0 退出游戏****\n");
//		printf("*******************\n");
//		scanf_s("%d", &start);
//		switch (start)
//		{
//		case 1:
//		{      int random;
//		int input;
//		printf("*****游戏开始*****\n");
//		srand((unsigned)time(NULL));
//		random = rand() % 100;
//		input = 0;
//		while (1)
//		{
//			printf("你猜多少：\n");
//			scanf("%d", &input);
//			if (input > random)
//			{
//				printf("你猜大了\n");
//			}
//			else if (input < random)
//			{
//				printf("你猜小了\n");
//			}
//			else
//			{
//				printf("你猜对了！\n");
//				printf("恭喜您！\n");
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
//				   printf("选择错误\n");
//				   break;
//		}
//		}
//	}
//	return 0;
//}