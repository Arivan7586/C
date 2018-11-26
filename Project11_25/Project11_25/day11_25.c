#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
	printf("������һ����:\n ");
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
//	printf("˳��任��\n");
//	printArr(arr, N);
//	system("pause");
//	return 0;
//}

//2.
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
			printf("�ҵ��ˣ��±�Ϊ��%d %d",i,j);
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
	printf("û�ҵ���\n");
}

int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	printf("������Ҫ���ҵ����֣�");
	int n = 0;
	scanf("%d",&n);
	findNum(arr, n);
	system("pause");
	return 0;
}