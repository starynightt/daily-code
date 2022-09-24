#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int num1(int n) {
	int i;
	if (n != 2) {
		for (i = 2; i * i <= n; ++i) {
			if (n % i == 0)
				break;
		}
		if (n % i == 0) {
			return 0;
		}
		else {
			return n;
		}
	}
	else {
		return 2;
	}
}

void num2(int n) {
	int i,t;
	for (i = 2; i <= n/2; i++) {
		t = num1(i) + num1(n - i);
		if (t == n) {
			printf("%d=%d+%d\n", n, i, n - i);
			break;
		}
	}
}

int main() {
	int N, i;
	scanf("%d", &N);
	for (i = 4; i <= N; i += 2) {
		num2(i);
	}
	return 0;
}