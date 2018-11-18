#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数返回参数二进制中 1 的个数 比如： 15 0000 1111 4 个 1

#include <stdio.h>
#include <stdlib.h>
  
int getOne(int num)
{
	int n = 0;
	int count = 0;
	while (num >= 2)
	{
		n = num % 2; 
		num = (num - n) / 2; 
		if (n == 1)
		{
			count++;
		}
	}
	if (num == 1)
	{
		count++;
	}
	return count;
}

int main()
{
	int ret = 0;
	int input = 0;
	printf("请输入一个数：");
	scanf("%d",&input);
	ret = getOne(input);
	printf("%d\n",ret);
	system("pause");
	return 0;
}