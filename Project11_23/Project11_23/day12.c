#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

//1.��д������unsigned int  reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//unsigned int  reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value>>i & 1)  //������λ����0�����Բ��ƶ�����1����ʼ�ƶ�
//		{
//			ret = ret | (value >> i & 1) << (31 - i);  //�������ƶ�iλ���������ƶ�31-iλ
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

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double average = 0;
//	printf("��������������\n");
//	scanf("%lf %lf",&a,&b);
//	average = (double)(a + (b - a) / 2.0);
//	printf("a��b��ƽ��ֵΪ��%lf\n",average);
//	system("pause");
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,3,2,1,4,5,6,8,7};
//	int i = 0;
//	int size = sizeof(arr)/sizeof(arr[0]);
//	for (i = 1; i < size; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("ֻ����һ�ε���Ϊ��%d\n",arr[0]);
//	system("pause");
//	return 0;
//}
//4.��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
		exchange(&arr[i], &arr[size - i]);  //ַ����
	}
	for (i = 1; i <= size; i++) 
	{
		printf("%c ",arr[i]);  
	}
	printf("\n");
	system("pause");
	return 0;
}