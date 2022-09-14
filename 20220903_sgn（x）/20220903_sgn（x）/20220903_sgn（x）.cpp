#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sgn(int a) {
	return a > 0 ? 1 : (a < 0 ? -1 : 0);
	
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d", sgn(x));
	return 0;
}