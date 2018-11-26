#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void menu()
{
	printf("************************************\n");
	printf("************* 猜数字游戏！**********\n");
	printf("*************    1 play   **********\n");
	printf("*************    0 exit   **********\n");
	printf("************************************\n");
}

void game()
{
	int key = 0;
	key = rand() % 100 + 1;
	int n = 0;
	while (1)
	{
		printf("请输入数字（1 - 100）：");
		scanf("%d", &n);
		if (n > key)
		{
			printf("猜大了！\n");
			printf("\n");
		}
		else if (n < key)
		{
			printf("猜小了！\n");
			printf("\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			printf("\n");
			break;
		}
	}
}

void begain()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("开始游戏！\n");
			game();
			break;
		case 0:
			printf("正在退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main()
{
	srand((unsigned) time (NULL));
	begain();
	system("pause");
	return 0;
}