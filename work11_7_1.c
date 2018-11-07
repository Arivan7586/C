#define _CRT_SECURE_NO_WARNINGS 1

//4、将三个数按从大到小输出

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tem = 0;
	scanf("%d %d %d",&a,&b,&c);

	if (a < b) //将a，b中较大的值赋给a
	{
		tem = a;
		a = b;
		b = tem;
	}
	if (a < c)//将a，c中较大的值赋给a
	{
		tem = a;
		a = c;
		c = a;
	}
	if (b < c)//将b，c中较大的值赋给b
	{
		tem = b;
		b = c;
		c = tem;
	}
	printf("由大到小依次为：%d %d %d ",a,b,c);
	system("pause");
	return 0;
}