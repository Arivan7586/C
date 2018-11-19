#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//2.获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。
void test2(int n)   
{
	int arr[32] = {0};
	int i = 0;
	int count = 0;
	for (i = 0; n != 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
		count = i + 1;
	}
	while (count < 32)
	{
		arr[count] = 0;
		count++;
	}
	printf("转换为二进制之后偶数位为：\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("转换为二进制之后奇数位为：\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//3. 输出一个整数的每一位。
void test3(int n)
{
	printf("从低位到高位依次为：");
	int m = 0;
	while (n > 9)
	{
		m = n % 10;
		printf("%d ",m);
		n = n / 10;
	}
	if (n < 10)
	{
		printf("%d\n", n);
	}
}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
void test4(int x,int y)
{
	int ret = 0;
	int count = 0;
	int countx = 0;
	int county = 0;
	int a = 0;
	int b = 0;
	while (x > 1 || y > 1)
	{
		a = x % 2;
		b = y % 2;
		x = x / 2;
		y = y / 2;
		if (a != b)
		{
			count++;
			countx++;
			county++;
		}
	}
	if (x != y && x <= 1 && y <= 1)
	{
		count++;
	}
	ret = (countx > county ? (countx - county) : (county - countx));
	printf("二进制表达中（bit）位不同的数目为：%d\n",count + ret);
}

int main()
{
	int input = 0;
	printf("请输入一个数：\n");
	scanf("%d", &input);
	test2(input);

	//int m = 0;
	//int n = 0;
	//printf("请输入两个数：\n");
	//scanf("%d %d",&m,&n);
	//test4(m,n);

	//int input = 0;
	//printf("请输入一个数：\n");
	//scanf("%d",&input);
	//test3(input);
	system("pause");
	return 0;
}