#define _CRT_SECURE_NO_WARNINGS 1

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 0;
	printf("请输入一个字符：\n");
	while ((input = getchar()) != EOF)
	{
		if (input >= 'a' && input <= 'z')
		{
			printf("%c\n",input-32);
		}
		else if (input >= 'A' && input <= 'Z')
		{
			printf("%c\n",input+32);
		}
	}
	system("pause");
	return 0;
}