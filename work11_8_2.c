#define _CRT_SECURE_NO_WARNINGS 1

//2.���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ����
//���λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ��
//��ˮ�ɻ�������

#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a = 0;
	int b = 0;
	int c = 0;	
	int m = 0;
	printf("0-999֮���ˮ�ɻ�����:\n");
	for (m = 100; m <= 999; m++)
	{
		a = (m - (m % 100)) / 100;
		b = (m - (a * 100) - (m % 10)) / 10;
		c = m - (a * 100) - (b * 10);
		if (m == (a*a*a) + (b*b*b) + (c*c*c))
		{
			printf("%d\n", m);
		}		
	}
	system("pause");
	return 0;	
}