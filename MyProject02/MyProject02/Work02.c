#define _CRT_SECURE_NO_WARNINGS
//判断1000年-2000年之间的闰年

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d",&a);
	if (0 == a%4)
	{
		if (0 != a % 100)
		{
			printf("%d年是闰年",a);
		}		
	}
	else
	{
		printf("%d年不是闰年",a);
	}
	if (0 == a % 400)
	{
		printf("%d年是闰年",a);
	}
	system("pause");
	return 0;
}