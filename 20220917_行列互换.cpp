#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int m, n, arr[100][100], i, j, x;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d", &x);
			arr[i][j] = x;
			if (i * j == n * m)break;
		}
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			printf("%d ", arr[j][i]);
			if (j == m - 1)printf("\n");
			if (i * j == n * m)break;
		}
	}
	printf("\n");
	return 0;
}