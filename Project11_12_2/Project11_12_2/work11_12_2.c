#define _CRT_SECURE_NO_WARNINGS 1

//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 0;
	printf("������һ���ַ���\n");
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