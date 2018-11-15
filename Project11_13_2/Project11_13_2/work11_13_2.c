#define _CRT_SECURE_NO_WARNINGS 1

//5.实现一个函数，判断一个数是不是素数。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int IsSushu(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入要判断的数：");
	scanf("%d",&n);
	ret = IsSushu(n);
	if (ret)
	{
		printf("%d是素数！\n",n);
	}
	else
	{
		printf("%d不是素数！\n", n);
	}
	system("pause");
	return 0;
}