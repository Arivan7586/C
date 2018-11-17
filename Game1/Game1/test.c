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
	inboard(board, ROW, COL);//�������
	displayboard(board, ROW, COL); //������
	while (1)
	{
		playerRun(board, ROW, COL);	//�����
		ret = judgement(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		displayboard(board, ROW, COL); //������
		computerRun(board, ROW, COL);   //������
		ret = judgement(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		displayboard(board, ROW, COL); //������
	}
	if (ret == 'X')
	{
		printf("\n");
		printf("��Ӯ�ˣ�\n");
		printf("\n");
	}
	else if (ret == '*')
	{
		printf("\n");
		printf("����ˣ�����Ӯ�ˣ�\n");
		printf("\n");
	}
	else if (ret == 'q')
	{
		printf("\n");
		printf("����ˣ�ƽ�֣�\n");
		printf("\n");
	}
	displayboard(board, ROW, COL); //������
}

void begain()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
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