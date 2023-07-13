#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COL 5


//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerBoard(char board[ROW][COL], int row, int col);

//��������
void ComputerBoard(char board[ROW][COL], int row, int col);

//
//���Ӯ---*
//����Ӯ---#
//ƽ��---Q
//����--C
char IsWin(char board[ROW][COL], int row, int col);

//�����Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);