#define _CRT_SECURE_NO_WARNINGS 1

//3.ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sign()
{
	int psw = 0;
	int key = 123456;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%d",&psw);
		if (psw == key)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (psw != key && i == 3)
	{
		printf("����������󣬳������˳�!\n");
	}
}

int main()
{
	sign();
	/*int password = 0;
	int key = 123456;
	int i = 0;
	printf("��������λ�������룺");
	for (i = 1; i <= 3; i++)
	{
		scanf("%d", &password);
		if (key == password)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
		if (3 == i)
		{
			printf("��������ۼ����Σ������˳�����\n");
		}
	}*/
	system("pause");
	return 0;
}

//int main()
//{
//	char password[6] = {0};
//	int i = 0;
//	printf("��������λ�������룺");
//	for (i = 1; i <= 3; i++)
//	{
//		printf("��������λ�������룺");
//		scanf("%s",&password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//		if (3 == i)
//		{
//			printf("��������ۼ����Σ������˳�����\n");
//		}
//	}
//	system("pause");
//	return 0;
//}