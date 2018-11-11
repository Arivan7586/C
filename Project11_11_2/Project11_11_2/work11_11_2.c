#define _CRT_SECURE_NO_WARNINGS 1

//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）

#include <stdio.h>
#include <stdlib.h>

int search(int arr[],int key,int size)
{
	int left = 0;
	int right = 0;
	right = size - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 0;
	int size = 0;
	int ret = 0;
	printf("请输入要查找的数：");
	scanf("%d",&key);
	size = sizeof(arr) / sizeof(arr[0]);//数组的长度
	ret = search(arr, key, size);
	if (-1 == ret)
	{
		printf("找不到了！\n");
	}
	else
	{
		printf("找到了，下标为:%d\n", ret);
	}
	system("pause");
	return 0;
}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,27,46};
//	int n = 0;
//	printf("请输入要查找的数：");
//	scanf("%d",&n);
//	int left = 0; //数组第一个元素的下标
//	int right = sizeof(arr) / sizeof(arr[0]-1); //数组最后一个元素的下标
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为:%d\n",mid);	
//			break;
//		}
//	}
//	if (n <arr[left] || n > arr[right])
//	{
//		printf("找不到了！\n");
//	}
//	system("pause");
//	return 0;
//}