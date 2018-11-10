#define _CRT_SECURE_NO_WARNINGS 

//1. 给定两个整形变量的值，将两个值的内容进行交换。
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
	printf("a等于%d\n", a);
	printf("b等于%d\n", b);
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
	printf("a等于%d\n",a);
	printf("b等于%d\n",b);
	*/	
}