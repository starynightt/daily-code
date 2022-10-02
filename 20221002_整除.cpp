#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fx(int x) {
	int i, j, n = 0;
	for (i = 1; i <= x; ++i)
		for (j = 1; j <= x; ++j) {
			if (x % (i * j) == 0) {
				++n;
			}
		}
	return n;
}

int sum(int n) {
	int i, sum = 0;
	for (i = 1; i <= n; ++i) {
		sum += fx(i);
	}
	return sum;
}

int main() {
	int n, i, T, arr[5];
	scanf("%d", &T);
	for (i = 0; i < T; ++i) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < T; ++i) {
		printf("%d\n", sum(arr[i]));
	}
	return 0;
}