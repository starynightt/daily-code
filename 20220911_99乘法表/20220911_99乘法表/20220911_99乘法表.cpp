#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int	m, s, n, a, b;
	scanf("%d%d%d", &m, &s, &n);
	for (a = s, b = 1; a <= 9&&b <= n; a++, b++) {
		printf("%d*%d=%d\n", m, a, m * a);
		for (; a == 9; a = s-1, m++);
	}
	return 0;
}