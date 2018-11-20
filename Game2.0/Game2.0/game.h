#ifndef __GAME_H_
#define __GAME_H_

#define ROW 9  
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define NUM 10  //�׵ĸ���

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


void inBoard(char board[ROWS][COLS], int rows, int cols, char set);
void disPlayBoard(char board[ROWS][COLS], int row, int col); //�˺���������������ÿһ��Ԫ��
void putInMines(char board[ROWS][COLS], int row, int col, char set, int num);
void playerGo(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, char set);

#endif