#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//��������������Ϸ״̬
//���Ӯ��W��  ����Ӯ��L��  ƽ�֣�S��  ������Ϸ��C��
char IsWin(char board[ROW][COL], int row, int col);


