#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum { NUM = 501 };
char room[NUM][NUM][6];
int sum = 0, x0, y0, d0;
void brain(char room[NUM][NUM][6], int x, int y, int m, int n, int d);
void setroom(char room[NUM][NUM][6], int m, int n);
void UAD(char room[NUM][NUM][6], int x, int y, int n, int m, int d);
void LAR(char room[NUM][NUM][6], int x, int y, int n, int m, int d);
//偶数纵向走，奇数左右走，大偶数向下走，大奇数向左走
//判断标志：首先对2取模判断方向，再减2判断与0关系确定具体方向，右上小数，左下大数

//走路法则：三维数组第三维作为前进标志，前进无法遇镜终止
//转向法则：上下与左右转向法则相反，遇到镜子第三维对应切换并保持前进

//死停法则：记录第一次遇到的镜子三维数据，若下次回到同样地点三维数据相同则终止循环



//设置房间，一共4层相同布局，每层有固定不会改变的前进规则
//n：房间的长度，相当于x轴
//m：房间的宽度，相当于y轴
void setroom(char room[NUM][NUM][6], int m, int n) {
	int i, j;
	char c;
	for (i = 1; i <= m; ++i) {
		for (j = 1; j <= n; ++j) {
			c = getchar();
			room[j][i][0] = c;
			room[j][i][1] = c;
			room[j][i][2] = c;
			room[j][i][3] = c;
			room[j][i][4] = c;
			room[j][i][5] = c;
			if (j % n == 0) {
				c = getchar();
			}
		}
	}
}
//走路函数：输入参数，起始坐标，方向
//怎么走？：设置循环，循环条件为x,y在房间合法数据内
void UAD(char room[NUM][NUM][6], int x, int y, int n, int m, int d) {//5：向下，0：向上
	int t = 1;
	while (y > 0 && y <= m && t) {
		if (room[x][y][d] == '.' && d % 2 == 1) {//下
			++y;
			++sum;
		}
		else if (room[x][y][d] == '.' && d % 2 == 0) {//上
			--y;
			++sum;
		}
		else if ((room[x][y][d] == '\\' && d % 2 == 1) || (room[x][y][d] == '/' && d % 2 == 0)) {//右拐
			d = 4;
			t = 0;
			++sum;
			brain(room, x + 1, y, m, n, d);
		}
		else if ((room[x][y][d] == '/' && d % 2 == 1) || (room[x][y][d] == '\\' && d % 2 == 0)) {//左拐
			d = 3;
			t = 0;
			++sum;
			brain(room, x - 1, y, m, n, d);
		}
	}
}
void LAR(char room[NUM][NUM][6], int x, int y, int n, int m, int d) {//3：向左，4：向右
	int t = 1;
	while (x > 0 && x <= n && t) {
		if (room[x][y][d] == '.' && d % 2 == 1) {//左
			--x;
			++sum;
		}
		else if (room[x][y][d] == '.' && d % 2 == 0) {//右
			++x;
			++sum;
		}
		else if ((room[x][y][d] == '\\' && d % 2 == 1) || (room[x][y][d] == '/' && d % 2 == 0)) {//向上
			d = 0;
			t = 0;
			++sum;
			brain(room, x, y - 1, m, n, d);
		}
		else if ((room[x][y][d] == '/' && d % 2 == 1) || (room[x][y][d] == '\\' && d % 2 == 0)) {//向下
			d = 5;
			t = 0;
			++sum;
			brain(room, x, y + 1, m, n, d);
		}
	}
}
//走路大脑：对方向进行判断，确定所走层数
void brain(char room[NUM][NUM][6], int x, int y, int m, int n, int d) {
	if (sum>4*m*n) {
		return;
	}
	if (x<=0 || x>n || y<=0 || y>m) {
		return;
	}
	switch (d) {
	case 5:case 0:UAD(room, x, y, n, m, d); break;
	case 3:case 4:LAR(room, x, y, n, m, d); break;
	}
	return;
}

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
	setroom(room, m, n);
	brain(room, x, y, m, n, d);
	if (sum < 4 * m * n) {
		printf("%d", sum);
	}
	else {
		printf("Forever!\n");
	}
	return 0;
}