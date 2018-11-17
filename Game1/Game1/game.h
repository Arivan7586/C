#ifndef _GAME_H_

#define _GAME_H_
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3      //行
#define COL 3

void inboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playerRun(char board[ROW][COL], int row, int col);
void computerRun(char board[ROW][COL],int row,int col);
// 'x'--玩家赢
// ‘*’-- 电脑赢
// ‘ ’--继续
// ‘q’--平局 

char judgement(char board[ROW][COL],int row,int col);

#endif // __GAME_H__