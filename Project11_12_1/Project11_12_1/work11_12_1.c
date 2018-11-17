#define _CRT_SECURE_NO_WARNINGS 1

//3.模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。

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
		printf("请输入密码：\n");
		scanf("%d",&psw);
		if (psw == key)
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (psw != key && i == 3)
	{
		printf("三次密码错误，程序已退出!\n");
	}
}

int main()
{
	sign();
	/*int password = 0;
	int key = 123456;
	int i = 0;
	printf("请输入六位数的密码：");
	for (i = 1; i <= 3; i++)
	{
		scanf("%d", &password);
		if (key == password)
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
		if (3 == i)
		{
			printf("密码错误累计三次，即将退出程序！\n");
		}
	}*/
	system("pause");
	return 0;
}

//int main()
//{
//	char password[6] = {0};
//	int i = 0;
//	printf("请输入六位数的密码：");
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入六位数的密码：");
//		scanf("%s",&password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//		if (3 == i)
//		{
//			printf("密码错误累计三次，即将退出程序！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}