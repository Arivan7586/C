#ifndef __GAME_H__
#define __GAME_H__

#define ROW  9
#define COL  9
#define MINES 10


#define ROWS ROW + 2
#define COLS COL + 2

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#endif //__GAME_H__

void inBoard(char board[ROWS][COLS],int rows, int cols, char set);
void disPlayBoard(char board[ROWS][COLS], int row, int col);
void inputMine(char board[ROWS][COLS], int row, int col, int mines, char set);
int findMine(char board[ROWS][COLS], char board1[ROWS][COLS],int row, int col, char set);
int isWin(char board[ROWS][COLS], int row, int col);