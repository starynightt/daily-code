#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char x(char y) {
	return 'A' <= y && y <= 'Z' || 'a' <= y && y <= 'z' ? y : ('Z' < y && y < 'a' ? y - 90 + 64 : y - 122 + 96);
}

int main() {
	char a, b, c, d, e;
	int t;
	scanf("%c %c %c %c %c\n%d", &a, &b, &c, &d, &e, &t);
	printf("%c%c%c%c%c", x(a + t), x(b + t), x(c + t), x(d + t), x(e + t));
	return 0;
}
