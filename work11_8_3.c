#define _CRT_SECURE_NO_WARNINGS 1

//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;	
	printf("������a��");
	scanf("%d", &n);
	int a = n;
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 5; i++)
	{					
			sum = sum + a;
			a = (a * 10) + n;			
	}
	printf("a+aa+aaa+aaaa+aaaaa��ǰ5��֮��Ϊ��%d\n", sum);	
	system("pause");
	return 0;
}