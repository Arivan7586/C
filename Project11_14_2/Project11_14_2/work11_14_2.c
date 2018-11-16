#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//5.递归和非递归分别实现strlen
int strlen1(char * st) //非递归
{
	int n = 0;
	while ('\0' != *(st))
	{
		if ('\0' != *(st))
		{
			n++;
			st++;
		}		
	}	
	return n;
}
int m = 0;
int strlen2(char * st) //递归实现
{
	if ('\0' != *(st))
	{
		m++;
		strlen2(++st);		
	}
	return m;
}

int main()
{
	int ret = 0;
	char st[] = "ninfakvlr";
	ret = strlen1(st);
	printf("字符个数为：%d\n",ret);
	system("pause");
	return 0;
}

//6.递归和非递归分别实现求n的阶乘
int jiecheng1(int n) //阶乘递归
{
	if (n > 1)
	{
		return n * jiecheng1(n - 1);
	}
	else
	{
		return n;
	}
}

int jiecheng2(int n) //非递归
{
	int i = 0;
	int m = 1;
	for (i = 1; i <= n; i++)
	{
		m = m * i;
	}
	return m;
}

//int main()
//{	
//	int n = 0;
//	int ret = 0;
//	printf("请输入要算的阶乘：\n");
//	scanf("%d", &n);
//	ret = jiecheng2(n);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}

//7.递归方式实现打印一个整数的每一位

void pr1(int n)  //递归的方法
{
	if (n > 9)
	{
		printf("%d  ",(n%10));
		pr1(n/10);
	}
	else
	{
		printf("%d\n",n);
	}
}

void pr2(int n) //非递归的方法
{
	while (n > 9)
	{
		printf("%d  ", (n % 10));
		n = n / 10;
	}
	if (n <= 9)
	{
		printf("%d",n);
	}
}

//int main()
//{
//	int n = 0;
//	printf("请输入要打印的数：\n");
//	scanf("%d",&n);
//	printf("由低位到高位依次为：");
//	pr2(n);
//	system("pause");
//	return 0;
//}