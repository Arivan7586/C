#define _CRT_SECURE_NO_WARNINGS 1

//2.求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，
//其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个
//“水仙花数”。

#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a = 0;
	int b = 0;
	int c = 0;	
	int m = 0;
	printf("0-999之间的水仙花数有:\n");
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