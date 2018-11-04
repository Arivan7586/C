#define _CRT_SECURE_NO_WARNINGS 1
//3.求10 个整数中最大值。 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qiuzuida1()
{
	int arr01[10] = { 17, 25, 68, 57, 15, 98, 56, 34, 75, 168 };
	int max = arr01[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr01[i] > max)
		{
			max = arr01[i];
		}
	}
	printf("最大值是%d ", max);
	return 0;
}

int main()
{
	qiuzuida1();
	system("pause");
	return 0;
}
