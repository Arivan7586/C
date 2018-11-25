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

int getOne1(unsigned int num)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)  //��Ҫ�ƶ�32��
	{
		if ((num >> i) & 1)
		{
			count++;
		}
	}
	return count;
}

int getOne2(int num)  //Ч�ʸ��ã�����Ҫȫ������
{
	int count = 0;
	while (num)  //��numΪ0��ʱ��ֹͣ
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}

int getOne3(int num)   //�����Ĵ�������
{
	int count = 0;
	while (num) 
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main()
{
	int input = 0;
	printf("������һ������");
	scanf("%d",&input);
	printf("%d\n", getOne(input));
	printf("%d\n", getOne1(input));
	printf("%d\n", getOne2(input));
	printf("%d\n", getOne3(input));
	system("pause");
	return 0;
}