#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************************************\n");
	printf("******************* ɨ����Ϸ ********************\n");
	printf("******************* 1��play  ********************\n");
	printf("******************* 0��exit  ********************\n");
	printf("*************************************************\n");
}

void play()
{
	char mine[ROWS][COLS] = {0}; // ���׵���Ϣ
	char show[ROWS][COLS] = {0}; // ���׵���Ϣ
	//���
	inBoard(mine, ROWS, COLS, ' '); 
	inBoard(show, ROWS, COLS, '*');
	//��ӡ
	disPlayBoard(show, ROW, COL);
	//���� 
	inputMine(mine,ROW,COL,MINES,'1'); //���� 
	//disPlayBoard(mine, ROW, COL);  //��ӡ���׵Ľ��
	//����
	int ret = 0;
	do
	{
		ret = findMine(mine, show, ROW, COL, '1'); //��ҿ�ʼɨ�ף�
		if (ret == 0)
		{
			printf("\n");
			printf("���ź���������ˣ�\n");
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
				printf("��ϲ�㣬�ɹ��ų������ף�\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ��������������룡\n");
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