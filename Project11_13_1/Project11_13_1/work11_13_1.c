#define _CRT_SECURE_NO_WARNINGS 1

//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。

#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int size)  //初始化数组
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void empty(int arr[], int size) //清空数组
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int size) //数组元素的逆置
{
	int left = 0;
	int right = size - 1;
	int i = 0;
	int j = 0;
	for (i = 1; i <= size / 2; i++)
	{
		int mm = 0;
		mm = arr[left];
		arr[left] = arr[right];
		arr[right] = mm;
		left++;
		right--;
	}
	for (j = 0; j < size; j++)
	{
		printf("%d ", arr[j]);
	}
}

int main()
{
	int arr[7] = { 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("初始化数组：\n");
	init(arr, size);
	printf("\n逆置数组");
	reverse(arr, size);
	printf("\n清空数组：");
	empty(arr, size);
	printf("\n");
	system("pause");
	return 0;
}