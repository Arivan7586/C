#define _CRT_SECURE_NO_WARNINGS
//�ж�1000��-2000��֮�������

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d",&a);
	if (0 == a%4)
	{
		if (0 != a % 100)
		{
			printf("%d��������",a);
		}		
	}
	else
	{
		printf("%d�겻������",a);
	}
	if (0 == a % 400)
	{
		printf("%d��������",a);
	}
	system("pause");
	return 0;
}