#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************************************\n");
	printf("****************** 扫雷游戏 ******************\n");
	printf("****************** 1、play  ******************\n");
	printf("****************** 0、exit  ******************\n");
	printf("**********************************************\n");
}

void play()
{
	char mine[ROWS][COLS] = {0}; //此数组用于存放雷的信息
	char show[ROWS][COLS] = {0}; //此数组用于存放排雷的信息
	inBoard(mine, ROWS, COLS, '0'); //先用0填充数组，0 代表不是雷
	inBoard(show, ROWS, COLS, '*'); //先用*来填充数组，*代表没有被排过的坐标

	//disPlayBoard(mine, ROW, COL);  //此函数用于输出数组的每一个元素
	disPlayBoard(show, ROW, COL);

	putInMines(mine, ROW, COL, '1', NUM); //此函是用于放置雷 字符 1 表示雷 
	disPlayBoard(mine, ROW, COL);  


	playerGo(mine, show, ROW, COL, '1');  //开始排雷
}

void begain()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
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
			printf("选择错误！\n");
			break;
		}
	} while (input);
}

main()
{
	srand((unsigned)time(NULL));
	begain();
	system("pause");
	return 0;
}