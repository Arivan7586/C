#define _CRT_SECURE_NO_WARNINGS 1

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exA(int x,int y)
{
	int a = x;
	int b = y;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d ", a);	
	return 0;
}

int exB(int m, int n)
{
	int a = m;
	int b = n;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d ", b);
	return 0;
}

int exchange()
{
	int A[] = {11,56,48,35,96};
	int B[] = {69,86,12,86,25};
	printf("交换前：\n");
	printf("数组A为：");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	printf("数组B为：");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	printf("交换后：\n");
	printf("数组A为：");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0]));i++)
	{
		exA(A[i],B[i]);								
	}	
	printf("\n");
	printf("数组B为：");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		exB(A[i], B[i]);
	}	
	return 0;
}

int main()
{	
	exchange();
	system("pause");
	return 0;
}