#define _CRT_SECURE_NO_WARNINGS 

//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
#include <stdio.h>
#include <stdlib.h>

int aa1()
{
	int a = 12;
	int b = 15;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a����%d\n", a);
	printf("b����%d\n", b);
	return 0;
}

int main()
{
	aa1();
	system("pause");
	return 0;
	/*
	int a = 12;
	int b = 15;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a����%d\n",a);
	printf("b����%d\n",b);
	*/	
}