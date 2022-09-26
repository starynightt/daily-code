#include"game.h"

int IFfull(char board[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; ++i)
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 1;
			}
		}
	return 0;
}

void  init(char arr[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; ++i)
		for (j = 0; j < col; ++j) {
			arr[i][j] = ' ';
		}
}

void printboard(char arr[ROW][ROW], int row, int col)
{
	int i, j;
	for (i = 0; i < ROW; ++i) {
		for (j = 0; j < col; ++j) {
			printf(" %c ", arr[i][j]);
			if (j < col - 1) {
				printf("|");
			}
			else {
				printf("\n");
			}
		}
		for (j = 0; j < col; ++j) {
			if (i < row - 1) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
				else {
					printf("\n");
				}
			}
		}
	}
}

void player1move(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("�����:\n");
	
	while (1) {
		printf("����������:\n");
		scanf("%d%d", &x, &y);
		if (x * y >= 1 && x * y <= 9) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�����걻ռ��\n");
			}
		}
		else {
			printf("�����������������\n");
		}
	}
}

void player2move(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("�����:\n");

	while (1) {
		printf("����������:\n");
		scanf("%d%d", &x, &y);
		if (x * y >= 1 && x * y <= 9) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '#';
				break;
			}
			else {
				printf("�����걻ռ��\n");
			}
		}
		else {
			printf("�����������������\n");
		}
	}
}

char ifwin(char board[ROW][COL], int row, int col) {
	int i;
	for (i = 0; i < row; ++i) {
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (i = 0; i < col; ++i) {
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') 
		return board[0][0];
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
		return board[2][0];
	if (IFfull(board,row,col)) {
		return 'C';
	}
	return '3';
}