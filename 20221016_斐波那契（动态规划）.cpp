#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long fibs[100] = { 0 };

long long fib(int n) {
	if (fibs[n] !=0 ) {
		return fibs[n];
	}
	else if (n == 1 || n == 2) {
		return fibs[n] = 1;
	}
	else {
		return fibs[n] = fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int m, n,temp,i;
	scanf("%d%d", &m, &n);
	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i >=m; --i) {
		printf("%lld ", fib(i));
	}
	return 0;
}
