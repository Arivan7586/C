#define _CRT_SECURE_NO_WARNINGS 1

//дһ�������ж�һ���ǲ�������
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 0;
	printf("������Ҫ�жϵ����:\n");
	scanf("%d",&year);
	if (panduan1(year))
	{
		printf("%d������\n",year);
	}
	else
	{
		printf("%d��������\n",year);
	}
	system("pause");
	return 0;
}

int panduan1(int n)
{
	if ((0 == n % 4 && 0 != n % 100) || (0 == n % 400))
	{
		return 1;
	}
	return 0;
}

int panduan2(int n)
{
	return ((0 == n % 4 && 0 != n % 100) || (0 == n % 400));
}