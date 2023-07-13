#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COL 5


//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家输入
void PlayerBoard(char board[ROW][COL], int row, int col);

//电脑输入
void ComputerBoard(char board[ROW][COL], int row, int col);

//
//玩家赢---*
//电脑赢---#
//平局---Q
//继续--C
char IsWin(char board[ROW][COL], int row, int col);

//棋盘是否满格
int IsFull(char board[ROW][COL], int row, int col);