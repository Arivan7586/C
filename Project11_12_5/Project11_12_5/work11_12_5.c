#define _CRT_SECURE_NO_WARNINGS 1

//3.实现一个函数判断year是不是润年。

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
	printf("请输入要判断的年份：");
	scanf("%d",&year);
	ret = panduan1(year);
	if (1 == ret)
	{
		printf("%d年是闰年!\n",year);
	}
	else
	{
		printf("%d年不是闰年！\n",year);
	}
	system("pause");
	return 0;
}