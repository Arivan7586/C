#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdio.h>

void inboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			if (j < col-1)
			{
				printf(" %c |", board[i][j]);			
			}
			else
			{
				printf(" %c ", board[i][j]);
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("--- --- ---\n");
		}
	}
}

void playerRun(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走！");
	printf("请输入坐标(1-3)：");
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (1 <= i && 3 >= i && 1 <= j && 3 >= j)
		{
			if (board[i - 1][j - 1 ]== ' ')
			{
				board[i - 1][j - 1] = 'X';
				break;
			}
			else
			{
				printf("输入错误，请重新输入！\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	}
}

void computerRun(char board[ROW][COL],int row,int col)
{
	printf("电脑走！\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if ((board[x][y] == ' ') && (board[x][y] != 'x'))
		{
			board[x][y] = '*';
			break;
		}
	}
}

static int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char judgement(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][col - 1] == board[i][col - 2] &&
			board[i][col - 1] == board[i][col - 3] &&
			board[i][col - 1] != ' ')
		{
			return board[i][col - 1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[row - 1][i] == board[row - 2][i] &&
			board[row - 1][i] == board[row - 3][i] &&
			board[row - 1][i] != ' ')
		{
			return board[row - 1][i];
		}
	}
	if (board[row - 3][col - 3] == board[row - 2][col - 2] &&
		board[row - 2][col - 2] == board[row - 1][col - 1] &&
		board[row - 1][col - 1] != ' ')
	{
		return board[row - 2][col - 2];
	}
	else if (board[row - 1][col - 3] == board[row - 2][col - 2] &&
			board[row - 2][col - 2] == board[row - 3][col - 1] &&
			board[row - 3][col - 1] != ' ')
	{
		return board[row - 2][col - 2];
	}
	//判断平局
	if (isFull(board,row,col) == 1)
	{
		return 'q';
	}
	//游戏继续
	return ' ';
}