#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void move(char A, char C) {
	printf("%c->%c\n", A, C);
}

void henoi(int n, char A, char C, char B) {
	if (n == 1)move(A, C);
	else{
		henoi(n - 1, A, B, C);
		move(A, C);
		henoi(n - 1, B, C, A);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	henoi(n, 'A', 'C', 'B');
	return 0;
}