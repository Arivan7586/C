#define _CRT_SECURE_NO_WARNINGS 1

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
		reverse_string(++string);   //�ҵ���һ���ַ��ĵ�ַ
		printf("%c",*(--string));  //����ַ�
	}
}

int main()
{
	char string[] = "abcdefgh";
	printf("���ú�\n");
	reverse_string(string);
	printf("\n");//��ʱstringΪ��һ��Ԫ�صĵ�ַ
	system("pause");
	return 0;
}