#define _CRT_SECURE_NO_WARNINGS 1

//4�������������Ӵ�С���

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tem = 0;
	scanf("%d %d %d",&a,&b,&c);

	if (a < b) //��a��b�нϴ��ֵ����a
	{
		tem = a;
		a = b;
		b = tem;
	}
	if (a < c)//��a��c�нϴ��ֵ����a
	{
		tem = a;
		a = c;
		c = a;
	}
	if (b < c)//��b��c�нϴ��ֵ����b
	{
		tem = b;
		b = c;
		c = tem;
	}
	printf("�ɴ�С����Ϊ��%d %d %d ",a,b,c);
	system("pause");
	return 0;
}