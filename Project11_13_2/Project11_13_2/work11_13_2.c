#define _CRT_SECURE_NO_WARNINGS 1

//5.ʵ��һ���������ж�һ�����ǲ���������

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
	printf("������Ҫ�жϵ�����");
	scanf("%d",&n);
	ret = IsSushu(n);
	if (ret)
	{
		printf("%d��������\n",n);
	}
	else
	{
		printf("%d����������\n", n);
	}
	system("pause");
	return 0;
}