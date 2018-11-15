#define _CRT_SECURE_NO_WARNINGS 1

//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��

#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int size)  //��ʼ������
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

void empty(int arr[], int size) //�������
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

void reverse(int arr[], int size) //����Ԫ�ص�����
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
	printf("��ʼ�����飺\n");
	init(arr, size);
	printf("\n��������");
	reverse(arr, size);
	printf("\n������飺");
	empty(arr, size);
	printf("\n");
	system("pause");
	return 0;
}