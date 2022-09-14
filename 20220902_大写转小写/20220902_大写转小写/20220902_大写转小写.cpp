#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;

int main() {
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c\n", x + 32, y + 32);
	return 0;
}