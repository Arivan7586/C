#define _CRT_SECURE_NO_WARNINGS 1

//3.ʵ��һ�������ж�year�ǲ������ꡣ

#include <stdio.h>
#include <stdlib.h>

int panduan(int *n)
{
	if ((0 == *n%4 && 0 != *n%100) || (0 == *n%100))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int panduan1(int n)
{
	if ((0 == n % 4 && 0 != n % 100) || (0 == n % 100))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	int ret = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d",&year);
	ret = panduan1(year);
	if (1 == ret)
	{
		printf("%d��������!\n",year);
	}
	else
	{
		printf("%d�겻�����꣡\n",year);
	}
	system("pause");
	return 0;
}