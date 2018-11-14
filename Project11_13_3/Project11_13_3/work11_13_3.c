#define _CRT_SECURE_NO_WARNINGS 1

//1.递归和非递归分别实现求第n个斐波那契数。

#include <stdio.h>
#include <stdlib.h>

//递归
int fib1(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		return (fib1(n - 1) + fib1(n - 2));
	}
}

//非递归
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		n = n - 1;  
		c = b;     
		b = a;      
		a = b + c;    
	}
	return a;
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入n的值 : ");
	scanf("%d",&n);
	ret = fib2(n);
	printf("斐波那契数是：%d\n",ret);
	system("pause");
	return 0;
}