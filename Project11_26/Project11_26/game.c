#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void menu()
{
	printf("************************************\n");
	printf("************* ��������Ϸ��**********\n");
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
		printf("���������֣�1 - 100����");
		scanf("%d", &n);
		if (n > key)
		{
			printf("�´��ˣ�\n");
			printf("\n");
		}
		else if (n < key)
		{
			printf("��С�ˣ�\n");
			printf("\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�����˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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