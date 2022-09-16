#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void loz(int h, int n, int x, char c) {
	int i, j = 1, a;
	for (i = 1; i < x; ++i)
		putchar(' ');
	for (a = 1; a <= h; ++a) {
		for (i = 1; i <= j; ++i)
			putchar(c);
		j += 2;
		x -= 1;
		putchar('\n');
		for (i = 1; i < x; ++i)
			putchar(' ');
	}
	putchar(' ');
	putchar(' ');
	x += 1;
	for (; a >= 1; --a) {
		for (i = 1; i <= j - 4; ++i)
			putchar(c);
		j -= 2;
		x += 1;
		putchar('\n');
		for (i = 1; i < x + 1; ++i)
			putchar(' ');
	}
}

int main() {
	int a, b, c;
	char d;
	scanf("%d%d%d %c", &a, &b, &c, &d);
	loz(a, b, c, d);
	return 0;
}