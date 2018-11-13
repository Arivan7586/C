#define _CRT_SECURE_NO_WARNINGS 1

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

#include <stdio.h>
#include <stdlib.h>
void chengfa(int n)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d  ",b,a,c);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("请输入要打印的乘法口诀表的行列数: ");
	scanf("%d",&n);
	chengfa(n);
	system("pause");
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%d ",b,a,c);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}