#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int strlen1(char * st) //�ǵݹ�
{
	int n = 0;
	while ('\0' != *(st))
	{
		if ('\0' != *(st))
		{
			n++;
			st++;
		}		
	}	
	return n;
}
int m = 0;
int strlen2(char * st) //�ݹ�ʵ��
{
	if ('\0' != *(st))
	{
		m++;
		strlen2(++st);		
	}
	return m;
}

int main()
{
	int ret = 0;
	char st[] = "ninfakvlr";
	ret = strlen1(st);
	printf("�ַ�����Ϊ��%d\n",ret);
	system("pause");
	return 0;
}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int jiecheng1(int n) //�׳˵ݹ�
{
	if (n > 1)
	{
		return n * jiecheng1(n - 1);
	}
	else
	{
		return n;
	}
}

int jiecheng2(int n) //�ǵݹ�
{
	int i = 0;
	int m = 1;
	for (i = 1; i <= n; i++)
	{
		m = m * i;
	}
	return m;
}

//int main()
//{	
//	int n = 0;
//	int ret = 0;
//	printf("������Ҫ��Ľ׳ˣ�\n");
//	scanf("%d", &n);
//	ret = jiecheng2(n);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void pr1(int n)  //�ݹ�ķ���
{
	if (n > 9)
	{
		printf("%d  ",(n%10));
		pr1(n/10);
	}
	else
	{
		printf("%d\n",n);
	}
}

void pr2(int n) //�ǵݹ�ķ���
{
	while (n > 9)
	{
		printf("%d  ", (n % 10));
		n = n / 10;
	}
	if (n <= 9)
	{
		printf("%d",n);
	}
}

//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ӡ������\n");
//	scanf("%d",&n);
//	printf("�ɵ�λ����λ����Ϊ��");
//	pr2(n);
//	system("pause");
//	return 0;
//}