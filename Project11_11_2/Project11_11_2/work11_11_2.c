#define _CRT_SECURE_NO_WARNINGS 1

//2.д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

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
	printf("������Ҫ���ҵ�����");
	scanf("%d",&key);
	size = sizeof(arr) / sizeof(arr[0]);//����ĳ���
	ret = search(arr, key, size);
	if (-1 == ret)
	{
		printf("�Ҳ����ˣ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ:%d\n", ret);
	}
	system("pause");
	return 0;
}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,27,46};
//	int n = 0;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d",&n);
//	int left = 0; //�����һ��Ԫ�ص��±�
//	int right = sizeof(arr) / sizeof(arr[0]-1); //�������һ��Ԫ�ص��±�
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
//			printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);	
//			break;
//		}
//	}
//	if (n <arr[left] || n > arr[right])
//	{
//		printf("�Ҳ����ˣ�\n");
//	}
//	system("pause");
//	return 0;
//}