#define _CRT_SECURE_NO_WARNINGS 1

//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

#include <stdio.h>
#include <stdlib.h>

int main()
{	
	qiuhe1(100);
	printf("\n");
	qiuhe2(100);
	system("pause");
	return 0;
}

int qiuhe1(int x)
{
	int m = x;
	double sum = 0;
	int i = 0;
	for (i = 1; i <= m; i++)
	{
		if (1 == i % 2)
		{
			sum = sum + 1.0 / i;
		}
		else
		{
			sum = sum - 1.0 / i;
		}
	}
	printf("结果为：%lf ", sum);
	return 0;
}

int qiuhe2(int x)
{
	int m = x;
	int i = 0;
	int a = -1;
	double sum = 0;
	for (i = 1; i <= m; i++)
	{
		sum = sum + 1.0 / i;
		sum = a * sum;
	}
	printf("结果为：%lf ", sum);
	return 0;
}
