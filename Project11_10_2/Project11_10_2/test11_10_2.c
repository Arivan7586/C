#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数判断一年是不是闰年
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year = 0;
	printf("请输入要判断的年份:\n");
	scanf("%d",&year);
	if (panduan1(year))
	{
		printf("%d是闰年\n",year);
	}
	else
	{
		printf("%d不是闰年\n",year);
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