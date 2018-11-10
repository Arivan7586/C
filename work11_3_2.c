#define _CRT_SECURE_NO_WARNINGS 1
//4.将三个数按从大到小输出。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	paixu();
	system("pause");
	return 0;
}

int paixu()
{
	int a;
	int b;
	int c;
	printf("请输入三个数:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				printf("%d %d %d", a, b, c);
			}
			else
			{
				printf("%d %d %d", a, c, b);
			}
		}
		else
		{
			printf("%d %d %d", c, a, b);
		}
	}
	else if (b > c)
	{
		if (b > a)
		{
			if (a > c)
			{
				printf("%d %d %d", b, a, c);
			}
			else
			{
				printf("%d %d %d", b, c, a);
			}
		}
		else
		{
			printf("%d %d %d", a, b, c);
		}
	}
	else
	{
		printf("%d %d %d", c, b, a);
	}
	return 0;
}
