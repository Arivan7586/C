#define _CRT_SECURE_NO_WARNINGS 1

//2.使用函数实现两个数的交换。 
#include <stdlib.h>
#include <stdio.h>

void exchange(int *m,int *n)
{
	*m = *m + *n;
	*n = *m - *n;
	*m = *m - *n;
}

void exchange2(int *m, int *n)
{
	*m = *m ^ *n;
	*n = *m ^ *n;
	*m = *m ^ *n;
}

void exchange3(int *m,int *n)
{
	int ex;
	ex = *m;
	*m = *n;
	*n = ex;
}

int main()
{
	int a = 0;
	int b = 0;	
	int ex = 0;
	printf("请输入需要交换的两个数：\n");
	scanf("%d %d", &a, &b);
	exchange(&a,&b);
	printf("交换后：%d %d",a,b);
	system("pause");
	return 0;
}