#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum { NUM = 505 };
char room[NUM][NUM][6];
int sum = 0, x0, y0, d0, t = 1;
void brain(char room[NUM][NUM][6], int x, int y, int m, int n, int d);
void setroom(char room[NUM][NUM][6], int m, int n);
void UAD(char room[NUM][NUM][6], int x, int y, int n, int m, int d);
void LAR(char room[NUM][NUM][6], int x, int y, int n, int m, int d);

int main() {
	int n, m, x, y, d, ch;
	scanf("%d%d%d%d%d", &n, &m, &y, &x, &d);
	if (d == 1 || d == 2) {
		d += 3;
	}
	x0 = x;
	y0 = y;
	d0 = d;
	ch = getchar();
	setroom(room, n, m);
	brain(room, x, y, n, m, d);
	if (!t) {
		printf("%d\n", sum);
	}
	else {
		printf("Forever!\n");
	}
	return 0;
}

void setroom(char room[NUM][NUM][6], int m, int n) {
	int i, j;
	char c;
	for (i = 1; i <= m; ++i) {
		for (j = 1; j <= n; ++j) {
			c = getchar();
			room[j][i][0] = c;
			room[j][i][3] = c;
			room[j][i][4] = c;
			room[j][i][5] = c;
			if (j % n == 0) {
				c = getchar();
			}
		}
	}
}
void UAD(char room[NUM][NUM][6], int x, int y, int n, int m, int d) {
	int t = 1;
	while (y > 0 && y <= m && t) {
		if (room[x][y][d] == '.' && d % 2 == 1) {
			++y;
			++sum;
		}
		else if (room[x][y][d] == '.' && d % 2 == 0) {
			--y;
			++sum;
		}
		else if ((room[x][y][d] == '\\' && d % 2 == 1) || (room[x][y][d] == '/' && d % 2 == 0)) {
			d = 4;
			t = 0;
			++sum;
			brain(room, x + 1, y, m, n, d);
		}
		else if ((room[x][y][d] == '/' && d % 2 == 1) || (room[x][y][d] == '\\' && d % 2 == 0)) {
			d = 3;
			t = 0;
			++sum;
			brain(room, x - 1, y, m, n, d);
		}
	}
}
void LAR(char room[NUM][NUM][6], int x, int y, int n, int m, int d) {
	int t = 1;
	while (x > 0 && x <= n && t) {
		if (room[x][y][d] == '.' && d % 2 == 1) {
			--x;
			++sum;
		}
		else if (room[x][y][d] == '.' && d % 2 == 0) {
			++x;
			++sum;
		}
		else if ((room[x][y][d] == '\\' && d % 2 == 1) || (room[x][y][d] == '/' && d % 2 == 0)) {
			d = 0;
			t = 0;
			++sum;
			brain(room, x, y - 1, m, n, d);
		}
		else if ((room[x][y][d] == '/' && d % 2 == 1) || (room[x][y][d] == '\\' && d % 2 == 0)) {
			d = 5;
			t = 0;
			++sum;
			brain(room, x, y + 1, m, n, d);
		}
	}
}
void brain(char room[NUM][NUM][6], int x, int y, int m, int n, int d) {
	if (x == x0 && y == y0 && d == d0 && !t) {
		t = 1;
		return;
	}
	t = 0;
	if (x <= 0 || x > n || y <= 0 || y > m) {
		return;
	}
	switch (d) {
	case 5:case 0:UAD(room, x, y, n, m, d); break;
	case 3:case 4:LAR(room, x, y, n, m, d); break;
	}
	return;
}