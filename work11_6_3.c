#define _CRT_SECURE_NO_WARNINGS 1

//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��

#include <stdio.h>

int main()
{
	int time = 0;
	for (int i = 1; i <= 100; i++)
	{
		switch (i - 9)
		{
		case 0:
		case 10:
		case 20:
		case 30:
		case 40:
		case 50:
		case 60:
		case 70:
		case 80:			
		case 90:
			time++;
			break;
		}
	}
	printf("9���ֵĴ���Ϊ��%d ",time);
	system("pause");
	return 0;
}