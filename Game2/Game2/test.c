#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************************************\n");
	printf("******************* 扫雷游戏 ********************\n");
	printf("******************* 1、play  ********************\n");
	printf("******************* 0、exit  ********************\n");
	printf("*************************************************\n");
}

void play()
{
	char mine[ROWS][COLS] = {0}; // 放雷的信息
	char show[ROWS][COLS] = {0}; // 排雷的信息
	//填充
	inBoard(mine, ROWS, COLS, ' '); 
	inBoard(show, ROWS, COLS, '*');
	//打印
	disPlayBoard(show, ROW, COL);
	//放雷 
	inputMine(mine,ROW,COL,MINES,'1'); //放雷 
	//disPlayBoard(mine, ROW, COL);  //打印放雷的结果
	//排雷
	int ret = 0;
	do
	{
		ret = findMine(mine, show, ROW, COL, '1'); //玩家开始扫雷！
		if (ret == 0)
		{
			printf("\n");
			printf("很遗憾，你踩雷了！\n");
			printf("\n");
			disPlayBoard(mine, ROW, COL);
			break;
		}	
		else
		{
			int ret = 0;
			ret = isWin(show,ROW,COL);
			if (ret)
			{
				printf("\n");
				printf("恭喜你，成功排除所有雷！\n");
				printf("\n");
				disPlayBoard(show, ROW, COL);
				break;
			}
		}
		disPlayBoard(show, ROW, COL);
	} while (ret = 1);
	printf("\n");
}

void begain()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);
}

int main()
{
	srand((unsigned)time(NULL));
	begain();
	/*char m = '0';
	int n = 55;
	m = (char)n;
	printf("%c\n",m);*/
	system("pause");
	return 0;
}