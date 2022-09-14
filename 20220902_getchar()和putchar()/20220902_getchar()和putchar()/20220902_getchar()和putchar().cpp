#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char x, y, z;
	scanf("%c%c%c", &x, &y, &z);
	putchar(x);
	printf(" ");
	putchar(y);
	printf(" ");
	putchar(z);
	printf("\n");
	return 0;
}