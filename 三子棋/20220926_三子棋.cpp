#include "game.h"

void game() {
	char temp;
	char board[ROW][COL];
	init(board, ROW, COL);
	printboard(board,ROW,COL);
	printf("玩家1（*）先走，玩家2（#）后走");
	while (1) {
		player1move(board, ROW, COL);
		printboard(board, ROW, COL);
		temp = ifwin(board, ROW, COL);
		if (temp != 'C') {
			break;
		}
		player2move(board, ROW, COL);
		printboard(board, ROW, COL);
		temp = ifwin(board, ROW, COL);
		if (temp != 'C') {
			break;
		}
	}
	if (temp == '*') {
		printf("玩家1获胜！\n");
	}
	if (temp == '#') {
		printf("玩家2获胜！\n");
	}
	if (temp == '3') {
		printf("平局\n");
	}
}

void menu() {
	int a;
	printf("************************************\n");
	printf("*******1.开始游戏，0.关闭游戏*******\n");
	printf("************************************\n");
	printf("请输入\n");
	do
	{
		scanf("%d", &a);
		switch (a)
		{
		case 1:game();
			break;
		case 0:printf("谢谢游玩\n");
			break;
		default: printf("输入错误！\n");
			break;
		}
	} while (a);
}

int main() {
	menu();
	return 0;
}