#define _CRT_SECURE_NO_WARNINGS 1

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

#include <stdio.h>
#include <stdlib.h>
void chengfa(int n)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d  ",b,a,c);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("������Ҫ��ӡ�ĳ˷��ھ����������: ");
	scanf("%d",&n);
	chengfa(n);
	system("pause");
	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%d ",b,a,c);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}