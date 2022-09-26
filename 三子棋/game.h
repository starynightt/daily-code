#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void  init(char arr[ROW][COL], int row, int col);
void printboard(char arr[ROW][COL], int row, int col);
void player1move(char arr[ROW][COL],int row,int col);
void player2move(char board[ROW][COL], int row, int col);
char ifwin(char board[ROW][COL], int rol, int col);
int IFfull(char board[ROW][COL], int row, int col);