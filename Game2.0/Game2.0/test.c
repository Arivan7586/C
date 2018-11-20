#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************************************\n");
	printf("****************** ɨ����Ϸ ******************\n");
	printf("****************** 1��play  ******************\n");
	printf("****************** 0��exit  ******************\n");
	printf("**********************************************\n");
}

void play()
{
	char mine[ROWS][COLS] = {0}; //���������ڴ���׵���Ϣ
	char show[ROWS][COLS] = {0}; //���������ڴ�����׵���Ϣ
	inBoard(mine, ROWS, COLS, '0'); //����0������飬0 ��������
	inBoard(show, ROWS, COLS, '*'); //����*��������飬*����û�б��Ź�������

	//disPlayBoard(mine, ROW, COL);  //�˺���������������ÿһ��Ԫ��
	disPlayBoard(show, ROW, COL);

	putInMines(mine, ROW, COL, '1', NUM); //�˺������ڷ����� �ַ� 1 ��ʾ�� 
	disPlayBoard(mine, ROW, COL);  


	playerGo(mine, show, ROW, COL, '1');  //��ʼ����
}

void begain()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("ѡ�����\n");
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