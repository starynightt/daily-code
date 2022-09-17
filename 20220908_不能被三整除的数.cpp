#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}
int min(int a, int b) {
	return a > b ? b : a;
}

int main() {
	int n, m, x, y;
	scanf("%d%d", &n, &m);
	x = max(n, m);
	y = min(n, m);
	for (; y <= x; ++y) {
		if (y % 3 != 0)
			printf("%d ", y);
	}
	printf("\n");
	return 0;
}