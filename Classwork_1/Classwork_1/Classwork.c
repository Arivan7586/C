#define _CRT_CECURE_NO_WARNINGS 1
//1. 打印100~200之间的素数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	for (int a = 100; a <=200;a++){
		for (int b = 2; b <=a/2;b++){
			if (a%b==0){
				break;
			}
			if (b == a/2){
				printf("%d ",a);
			}
		}
	}
	system("pause");
	return 0;
}
