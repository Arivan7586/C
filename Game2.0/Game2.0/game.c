#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void inBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void disPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c",board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void putInMines(char board[ROWS][COLS], int row, int col, char set, int num)
{
	int i = 0;
	int j = 0;
	int a = 0;
	while (a < num)
	{
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = set;
			a++;
		}
	}
}

void findMines(char mine[ROWS][COLS],char show[ROWS][COLS], int a, int b, char set)  //set代表雷
{
	int ret = 0;
	ret = mine[a - 1][b] +
		mine[a - 1][b - 1] +
		mine[a][b - 1] +
		mine[a + 1][b - 1] +
		mine[a + 1][b] +
		mine[a + 1][b + 1] +
		mine[a][b + 1] +
		mine[a - 1][b + 1] - 8 * '0';
	if (ret == 0)
	{
		show[a][b] = ' ';
		if (show[a - 1][b] == '*' && a - 1 > 0)	//此处规定坐标不可越界
		{
			findMines(mine, show, a - 1, b, set);
		}
		if (show[a - 1][b - 1] == '*' && a - 1 > 0 && b - 1 > 0)
		{
			findMines(mine, show, a - 1, b - 1, set);
		}
		if (show[a][b - 1] == '*' && b - 1 > 0)
		{
			findMines(mine, show, a, b - 1, set);
		}
		if (show[a + 1][b - 1] == '*' && a + 1 <= ROW && b - 1 > 0)
		{
			findMines(mine, show, a + 1, b - 1, set);
		}
		if (show[a + 1][b] == '*' && a + 1 <= ROW)
		{
			findMines(mine, show, a + 1, b, set);
		}
		if (show[a + 1][b + 1] == '*' && a + 1 <= ROW && b + 1 <= COL)
		{
			findMines(mine, show, a + 1, b + 1, set);
		}
		if (show[a][b + 1] == '*' && b + 1 <= COL)
		{
			findMines(mine, show, a, b + 1, set);
		}
		if (show[a - 1][b + 1] == '*' && a - 1 > 0 && b + 1 <= COL)
		{
			findMines(mine, show, a - 1, b + 1, set);
		}
	}
	else
	{
		show[a][b] = ret + '0';
	}
}

void playerGo(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, char set)
{
	int round = 0;
	int a = 0;
	int b = 0;
	while (1)    //当排除的坐标等于 9 * 9 - 10 个的时候，排雷成功
	{
		printf("请输入坐标（1-9）：");
		scanf("%d %d", &a, &b);
		printf("\n");
		if (a >= 1 && a <= 9 && b >= 1 && b <= 9 && show[a][b] == '*')   
		{
			if (mine[a][b] == set && round == 0)  //如果第一次输入的坐标就有一颗雷 ，就挪走这个雷
			{
				mine[a][b] = '0';
				putInMines(mine, row, col, set, 1); //重新放置一个雷
				round++;
				findMines(mine, show, a, b, set); //set 代表雷  此函数用于查找坐标（a，b）周围八个坐标中雷的情况
				disPlayBoard(show, row, col);
			}
			else if (mine[a][b] == set && round != 0)
			{
				printf("很遗憾，你踩雷了！\n");
				round++;
				printf("\n");
				disPlayBoard(mine, row, col);
				printf("\n");
				break;
			}
			else
			{
				round++;
				findMines(mine, show, a, b, set); //set 代表雷  此函数用于查找坐标（a，b）周围八个坐标中雷的情况
				disPlayBoard(show, row, col);				
			}
			int i = 0;
			int j = 0;
			int win = 0;
			for (i = 1; i <= ROW; i++)
			{
				for (j = 1; j <= COL; j++)
				{
					if (show[i][j] == '*')
					{
						win++;
					}
				}
			}
			if (win <= NUM)
			{
				printf("恭喜你，排雷成功！\n");
				break;
			}
		}
		else
		{
			printf("输入错误！请重新输入:");
			printf("\n");
		}
	}
}
