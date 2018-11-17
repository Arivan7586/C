#ifndef _GAME_H_

#define _GAME_H_
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3      //��
#define COL 3

void inboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playerRun(char board[ROW][COL], int row, int col);
void computerRun(char board[ROW][COL],int row,int col);
// 'x'--���Ӯ
// ��*��-- ����Ӯ
// �� ��--����
// ��q��--ƽ�� 

char judgement(char board[ROW][COL],int row,int col);

#endif // __GAME_H__