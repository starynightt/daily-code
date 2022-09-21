#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void loop(int M, int K) {
	int i, n = 0;
	for (i = 2; i <= M; ++i) {
		n = (n + K) % i;
	}
	printf("%d", n+1);
}

int main() {
	int M, K;
	scanf("%d%d", &M, &K);
	loop(M, K);
	return 0;
}
