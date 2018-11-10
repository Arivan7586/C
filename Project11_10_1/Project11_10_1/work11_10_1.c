#define _CRT_SECURE_NO_WARNINGS 1

//判断一个数是不是素数（使用函数）
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x = 0;
	scanf("%d",&x);
	if (is_prime(x))
	{
		printf("%d是素数\n",x);
	}

	else
	{
		printf("%d不是素数\n",x);
	}
	system("pause");
	return 0;
}

int is_prime(int n)
{
	//判断一个数是不是素数（使用函数）
	int i = 0;
	for (i = 2; i <= n/2; i++)
	{
		if (0 == n%i )
		{
			return 0;
		}
	}
	return 1;
}