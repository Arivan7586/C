#define _CRT_SECURE_NO_WARNINGS 1

//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����

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
	printf("����ǰ��\n");
	printf("����AΪ��");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	printf("����BΪ��");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	printf("������\n");
	printf("����AΪ��");
	for (int i = 0; i < (sizeof(A) / sizeof(A[0]));i++)
	{
		exA(A[i],B[i]);								
	}	
	printf("\n");
	printf("����BΪ��");
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