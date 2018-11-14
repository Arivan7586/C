#define _CRT_SECURE_NO_WARNINGS 1

//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

#include <stdio.h>
#include <stdlib.h>

void reverse_string(char *string)
{
	//printf("%p ",string);
	//printf("%p ", string+1);
	//printf("%p ", string+2);
	//printf("%p ", string+3);
	if (*string == '\0')
	{
		printf("%c",*string);
	}
	else
	{
		reverse_string(++string);   //找到下一个字符的地址
		printf("%c",*(--string));  //输出字符
	}
}

int main()
{
	char string[] = "abcdefgh";
	printf("逆置后：\n");
	reverse_string(string);
	printf("\n");//此时string为第一个元素的地址
	system("pause");
	return 0;
}