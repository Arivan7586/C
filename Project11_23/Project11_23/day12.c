#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

//1.编写函数：unsigned int  reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//unsigned int  reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value>>i & 1)  //二进制位上是0，可以不移动。是1，开始移动
//		{
//			ret = ret | (value >> i & 1) << (31 - i);  //先向右移动i位，再向右移动31-i位
//		}
//		//ret = (value >> i & 1) << (32 - i) | ret;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n",ret);
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double average = 0;
//	printf("请输入两个数：\n");
//	scanf("%lf %lf",&a,&b);
//	average = (double)(a + (b - a) / 2.0);
//	printf("a，b的平均值为：%lf\n",average);
//	system("pause");
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,3,2,1,4,5,6,8,7};
//	int i = 0;
//	int size = sizeof(arr)/sizeof(arr[0]);
//	for (i = 1; i < size; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("只出现一次的数为：%d\n",arr[0]);
//	system("pause");
//	return 0;
//}
//4.有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
void exchange(char * a, char * b)
{
	char c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	char arr[] = "student a am i";
	int size = 0;
	int i = 0;
	size = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("%c", *(arr+size-1));
	printf("\n");
	for (i = 0; i <= size; i++)
	{
		if (arr[i] == arr[size - i])
		{
			break;
		}
		exchange(&arr[i], &arr[size - i]);  //址传递
	}
	for (i = 1; i <= size; i++) 
	{
		printf("%c ",arr[i]);  
	}
	printf("\n");
	system("pause");
	return 0;
}