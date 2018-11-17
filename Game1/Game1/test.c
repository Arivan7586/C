#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("********  1.play   0.exit  ********\n");
	printf("***********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	inboard(board, ROW, COL);//Ìî³äÊı×é
	displayboard(board, ROW, COL); //»­ÆåÅÌ
	while (1)
	{
		playerRun(board, ROW, COL);	//Íæ¼Ò×ß
		ret = judgement(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		displayboard(board, ROW, COL); //»­ÆåÅÌ
		computerRun(board, ROW, COL);   //µçÄÔ×ß
		ret = judgement(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		displayboard(board, ROW, COL); //»­ÆåÅÌ
	}
	if (ret == 'X')
	{
		printf("\n");
		printf("ÄãÓ®ÁË£¡\n");
		printf("\n");
	}
	else if (ret == '*')
	{
		printf("\n");
		printf("ÄãÕæ²Ë£¬µçÄÔÓ®ÁË£¡\n");
		printf("\n");
	}
	else if (ret == 'q')
	{
		printf("\n");
		printf("ÄãÕæ²Ë£¬Æ½¾Ö£¡\n");
		printf("\n");
	}
	displayboard(board, ROW, COL); //»­ÆåÅÌ
}

void begain()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·£¡\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¡\n");
			break;
		}
	}
	while (input);
}

int main()
{
	//menu();
	begain();
	system("pause");
	return 0;
}