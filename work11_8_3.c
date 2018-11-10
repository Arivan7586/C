#define _CRT_SECURE_NO_WARNINGS 1

//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;	
	printf("请输入a：");
	scanf("%d", &n);
	int a = n;
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 5; i++)
	{					
			sum = sum + a;
			a = (a * 10) + n;			
	}
	printf("a+aa+aaa+aaaa+aaaaa的前5项之和为：%d\n", sum);	
	system("pause");
	return 0;
}