#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ز����������� 1 �ĸ��� ���磺 15 0000 1111 4 �� 1

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
	printf("������һ������");
	scanf("%d",&input);
	ret = getOne(input);
	printf("%d\n",ret);
	system("pause");
	return 0;
}