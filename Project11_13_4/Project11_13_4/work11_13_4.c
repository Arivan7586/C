#define _CRT_SECURE_NO_WARNINGS 1

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

#include <stdio.h>
#include <stdlib.h>

int Mi(int n,int k)
{
	if (0 == k)
	{
		return 1;
	}
	else if (1 == k)
	{
		return n;
	}
	else
	{
		return (n * Mi(n, k - 1));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("������n��k��ֵ��\n");
	scanf("%d%d",&n,&k);
	ret = Mi(n, k);
	printf("%d",ret);
	system("pause");
	return 0;
}