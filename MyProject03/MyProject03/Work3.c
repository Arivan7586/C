#define _CRT_SECURE_NO_WARNINGG 1

//打印出99乘法表
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int c;
	for (a = 1; a <= 9; a++)
	{
		int b;
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d ",b,a,c);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}