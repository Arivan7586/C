#define _CRT_SECURE_NO_WARNINGS 1

//1.����Ļ���������ͼ��
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int line = 0;
	printf("������Ҫ��ӡ�������ǵ�������\n");
	scanf("%d",&line);
	//��ʼ��ӡ������
	for (a = 1; a <= line; a++)
	{
		//���ȴ�ӡ�ո�
		for (b = 1; b <= (line - a);b++)
		{
			printf(" ");
		}
		//�ٴ�ӡ*��
		for (b = 1; b <= 2 * a - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ʼ��ӡ������
	for (a = 1; a < line; a++)
	{
		//���ȴ�ӡ�ո�
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
		//�ٴ�ӡ*��
		for (b = 1; b <= 2 * (line - a) - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}