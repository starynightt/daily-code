#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d", &a);
	b = a / 100;
	c = ((a - 100 * b) / 10);
	d = (a % 10);
	printf("%d%d%d\n", d, c, b);
	return 0;
}