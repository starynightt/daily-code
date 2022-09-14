#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long fib(int);
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", fib(n));
	return 0;
}
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
long long fib(int n){
	int a = 1, b = 1,i,c;
	for (i = 2; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}