#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long double fact(int n) {
	return n == 0 ? 1 : n * fact(n - 1);
}

int main() {
	int n, i, h;
	scanf("%d", &n);
	for (h = 1; h <= n; ++h) {
		for (i = 1; i <= h;++i)
			printf("%.0llf ",fact(h-1)/fact(i-1)/fact(h-i));
		printf("\n");
	}
	return 0;
}