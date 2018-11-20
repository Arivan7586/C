#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void inBoard(char board[ROWS][COLS],int rows, int cols, char set)
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

void disPlayBoard(char board[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (k = 0; k <= col; k++)
	{
		if (k == 0)
		{
			printf("%d", k);
		}
		else
		{
			printf(" %d ", k);
		}
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d",i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ",board[i][j]);
		}
		printf("\n");
	}
}

void inputMine(char board[ROWS][COLS],int row,int col,int mines,char set)  //��������ף��׵�����Ϊmines���׵ı�ʶΪ�ַ���set��
{
	int k = 0;
	for (k = 0; k < mines; k++)
	{
		int i = 0;
		int j = 0;
		i = rand() % 9 + 1;
		j = rand() % 9 + 1;
		if (board[i][j] != set)
		{
			board[i][j] = set;
		}
		else
		{
			i = rand() % 9 + 1;
			j = rand() % 9 + 1;
			board[i][j] = set;
		}
	}
}

void fm(char board[ROWS][COLS],char board1[ROWS][COLS],int i,int j)  ////�˺�����ҪѰ�� ��i��j����Χ�ж��ٸ���
{
	//�ַ�0��ASCII����ֵΪ 48

		int count = 48;  //��¼����i��j��Χ�׵ĸ���
		int count1 = 0;  //��¼����i��j��Χû���׵ĸ���
		if (board[i - 1][j - 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i - 1][j - 1] = ' ';
		}
		if (board[i][j - 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i][j - 1] = ' ';
		}
		if (board[i + 1][j - 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i + 1][j - 1] = ' ';
		}
		if (board[i + 1][j] == '1')
		{
			count++;
		}
		else
		{
			board1[i + 1][j] = ' ';
		}
		if (board[i + 1][j + 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i + 1][j + 1] = ' ';
		}
		if (board[i][j + 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i][j + 1] = ' ';
		}
		if (board[i - 1][j + 1] == '1')
		{
			count++;
		}
		else
		{
			board1[i - 1][j + 1] = ' ';
		}
		if (board[i - 1][j] == '1')
		{
			count++;
		}
		else
		{
			board1[i - 1][j] = ' ';
		}
		char m = 0;
		if (count != 48)
		{
			m = (char)count;   //���׵ĸ���ת�����ַ�����ʾ
			board1[i][j] = m; //�����꣨i��j����Χ�׵ĸ�������������
			
		}

}

int findMine(char board[ROWS][COLS], char board1[ROWS][COLS], int row, int col, char set) //�ж�������������Ƿ�����
{
	int count = 0;
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("\n");
		printf("����������>(1-9)��");
		scanf("%d %d", &i, &j);
		printf("\n");
		if (i < 1 || i > 9 || j < 1 || j > 9 || board1[i][j] != '*')
		{
			printf("����������������룡\n");
		}
		else
		{
			break;
		}
	}
	
	if (board[i][j] == set)
	{
		return 0; //���׷���0
	}
	else
	{
		board1[i][j] = ' ';
		fm(board,board1,i,j); //�˺�����ҪѰ�� ��i��j����Χ�ж��ٸ���
		return 1;  //û���׷���1
	}
}

int isWin(char board[ROWS][COLS], int row, int col) //�ж���Ӯ�ĺ���
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (board[i][j] == ' ')
			{
				count++;
			}
		}
	}
	if (count == 71) // �����show��ֻʣ��ʮ�� * �����ж�Ϊ�ɹ��ų������ף�
	{
		return 1;
	}
	return 0;
}
//int ret = 0;
//char ret1 = 0;
//ret = fm(board, board1, i, j);
//ret1 = ret;
//if (ret1 == ' ')
//{
//	board1[i][j] = ' ';
//	return 1;
//	//board1[i][j] = ret1;
//}
//else
//{
//	board1[i][j] = ret1;
//	return 1;
//}
////board1[i][j] = ret1;