#define _CRT_SECURE_NO_WARNINGS 1

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n > 9)
	{
		return (n % 10) + DigitSum(n / 10);
	}
	else
	{
		return n;
	}
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("������һ���Ǹ�����\n");
	scanf("%d",&n);
	ret = DigitSum(n);
	printf("%d",ret);
	system("pause");
	return 0;
}