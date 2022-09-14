#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int int_read() {
	int n;
	scanf_s("%d", &n);
	return n;
}

int main() {
	int a;
	a = int_read();
	printf("%d", a);
	return 0;
}