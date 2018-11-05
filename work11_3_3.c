#define _CRT_SECURE_NO_WARNINGS 1

//5.求两个数的最大公约数。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//qiumax1();
	qiumax2();
	system("pause");
	return 0;
}

//求一个数的最大约数
int qiumax1()
{
	int a = 0;
	int b = 0;
	int max = 1;
	printf("请输入一个数:");
	scanf("%d", &a);
	for (b = 2; b <= a / 2; b++)
	{
		if (0 == a%b)
		{
			max = b;
		}
	}
	printf("它的最大约数为：%d\n", max);
}

//求两个数的最大公约数
int qiumax2()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int max = 1;
	printf("请输入两个数:\n");
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
	printf("它们的最大公约数为：%d\n", max);
}