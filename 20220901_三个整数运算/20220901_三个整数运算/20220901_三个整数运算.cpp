#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d+%d+%d=%d\n", a, b, c, d = a + b + c);
	printf("%d-%d-%d=%d\n", a, b, c, d = a - b - c);
	printf("%d*%d*%d=%d\n", a, b, c, d = a * b * c);
	printf("%d/%d/%d=%d\n", a, b, c, d = a / b / c);
	printf("%d%%%d%%%d=%d\n", a, b, c, d = a % b % c);
		return 0;
}