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
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,3,2,1,4,5,6,8,7};
	int i = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	for (i = 1; i < size; i++)
	{
		arr[0] = arr[0] ^ arr[i];
	}
	printf("ֻ����һ�ε���Ϊ��%d\n",arr[0]);
	system("pause");
	return 0;
}
//4.��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student
