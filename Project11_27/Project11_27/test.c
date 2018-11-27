#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int fib(int n)		// 1 1 2 3 5 8 13 21 34  斐波那契数
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n > 2)         
	{
		while (n > 2)
		{
			a = b;
			b = c;
			c = a + b;
			n--;
		}
		return c;
	}
	else
	{
		return c;
	}
}

int main()
{
	int n = 0;
	printf("请输入要求的斐波那契数：");
	scanf("%d",&n);
	printf("%d\n",fib(n));
	system("pause");
	return 0;
}