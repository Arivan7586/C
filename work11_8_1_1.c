#define _CRT_SECURE_NO_WARNINGS 1

//1.在屏幕上输出以下图案
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int line = 0;
	printf("请输入要打印的正三角的行数：\n");
	scanf("%d",&line);
	//开始打印正三角
	for (a = 1; a <= line; a++)
	{
		//首先打印空格
		for (b = 1; b <= (line - a);b++)
		{
			printf(" ");
		}
		//再打印*号
		for (b = 1; b <= 2 * a - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	//开始打印倒三角
	for (a = 1; a < line; a++)
	{
		//首先打印空格
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
		//再打印*号
		for (b = 1; b <= 2 * (line - a) - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}