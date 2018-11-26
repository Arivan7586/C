#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

//1.调整数组使奇数全部都位于偶数前面。
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#define N 10
void change(int arr[])
{
	int left = 0;
	int right = N - 1;
	while (left < right)
	{
		if ((0 == arr[left] % 2) && (1 == arr[right] % 2))
		{
			int tem = 0;
			tem = arr[left];
			arr[left] = arr[right];
			arr[right] = tem;
		}
		left++;
		right--;
	}
	printf("\n");
}

void printArr(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void newArr(int arr[], int n)
{
	int i = 0;
	printf("请输入一组数:\n ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

}

//int main()
//{
//	int arr[N] = {0};
//	newArr(arr, N);
//	printArr(arr,N);
//	printf("\n");
//	change(arr);
//	printf("顺序变换后：\n");
//	printArr(arr, N);
//	system("pause");
//	return 0;
//}

//2.
////杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
void findNum(int arr[ROW][COL], int num)
{
	int i = 0;
	int j = COL - 1;
	while (i < ROW && j >= 0)
	{
		if (arr[i][j] == num)
		{
			printf("找到了！下标为：%d %d",i,j);
			break;
		}
		else if (arr[i][j] < num)
		{
			i++;
		}
		else //if (arr[i][j] > num)
		{
			j--;
		}
	}
	printf("没找到！\n");
}

int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	printf("请输入要查找的数字：");
	int n = 0;
	scanf("%d",&n);
	findNum(arr, n);
	system("pause");
	return 0;
}