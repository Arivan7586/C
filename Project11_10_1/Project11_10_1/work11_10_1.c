#define _CRT_SECURE_NO_WARNINGS 1

//�ж�һ�����ǲ���������ʹ�ú�����
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x = 0;
	scanf("%d",&x);
	if (is_prime(x))
	{
		printf("%d������\n",x);
	}

	else
	{
		printf("%d��������\n",x);
	}
	system("pause");
	return 0;
}

int is_prime(int n)
{
	//�ж�һ�����ǲ���������ʹ�ú�����
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