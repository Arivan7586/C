#define _CRT_SECURE_NO_WARNINGS 1

//5.�������������Լ����

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//qiumax1();
	qiumax2();
	system("pause");
	return 0;
}

//��һ���������Լ��
int qiumax1()
{
	int a = 0;
	int b = 0;
	int max = 1;
	printf("������һ����:");
	scanf("%d", &a);
	for (b = 2; b <= a / 2; b++)
	{
		if (0 == a%b)
		{
			max = b;
		}
	}
	printf("�������Լ��Ϊ��%d\n", max);
}

//�������������Լ��
int qiumax2()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int max = 1;
	printf("������������:\n");
	scanf("%d %d", &a,&d);
	for (b = 2; b <= a / 2; b++)
	{
		for (c = b; c <= d / 2; c++)
		{
			if (0 == a%c)
			{
				if (0 == d%c)
				{
					max = c;
				}
			}
		}
	}
	printf("���ǵ����Լ��Ϊ��%d\n", max);
}