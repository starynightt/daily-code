#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int matrix[105][105] = { 0 };

void setboard(int n, int num, int j) {
	int a, i, tis, a0;
	tis = n - num - 1;
	a = (n - 2) * (n - 2) + 1;
	a0 = a;
	for (i = n - 1; i > tis; --i) {
		matrix[i + j][n + j] = a;
		++a;
	}
	for (i = n - 1; i > tis; --i) {
		matrix[1 + j][i + j] = a;
		++a;
	}
	for (i = 2; i <= num + 1; ++i) {
		matrix[i + j][1 + j] = a;
		++a;
	}
	for (i = 2; i <= num + 1; ++i) {
		matrix[n + j][i + j] = a;
		++a;
	}
	if (a0 != 2) {
		setboard(n - 2, num - 2, j + 1);
	}
	else {
		matrix[n - 1 + j][n - 1 + j] = 1;
	}
}
int main() {
	int n, num, i, j = 0, sum = 0;
	scanf("%d", &n);
	num = n - 1;
	setboard(n, num, j);
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			printf("%d ", matrix[i][j]);
			if (j == n) {
				putchar('\n');
			}
		}
	}
	for (i = 1,j=n; i <= n; ++i,--j) {
		sum += matrix[i][i] + matrix[j][i];
	}
	printf("%d\n", --sum);
	return 0;
}
