#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//2.��ȡһ�������������������е�ż��λ������λ�� �ֱ�������������С�
void test2(int n)   
{
	int arr[32] = {0};
	int i = 0;
	int count = 0;
	for (i = 0; n != 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
		count = i + 1;
	}
	while (count < 32)
	{
		arr[count] = 0;
		count++;
	}
	printf("ת��Ϊ������֮��ż��λΪ��\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("ת��Ϊ������֮������λΪ��\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//3. ���һ��������ÿһλ��
void test3(int n)
{
	printf("�ӵ�λ����λ����Ϊ��");
	int m = 0;
	while (n > 9)
	{
		m = n % 10;
		printf("%d ",m);
		n = n / 10;
	}
	if (n < 10)
	{
		printf("%d\n", n);
	}
}

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
void test4(int x,int y)
{
	int ret = 0;
	int count = 0;
	int countx = 0;
	int county = 0;
	int a = 0;
	int b = 0;
	while (x > 1 || y > 1)
	{
		a = x % 2;
		b = y % 2;
		x = x / 2;
		y = y / 2;
		if (a != b)
		{
			count++;
			countx++;
			county++;
		}
	}
	if (x != y && x <= 1 && y <= 1)
	{
		count++;
	}
	ret = (countx > county ? (countx - county) : (county - countx));
	printf("�����Ʊ���У�bit��λ��ͬ����ĿΪ��%d\n",count + ret);
}

int main()
{
	int input = 0;
	printf("������һ������\n");
	scanf("%d", &input);
	test2(input);

	//int m = 0;
	//int n = 0;
	//printf("��������������\n");
	//scanf("%d %d",&m,&n);
	//test4(m,n);

	//int input = 0;
	//printf("������һ������\n");
	//scanf("%d",&input);
	//test3(input);
	system("pause");
	return 0;
}