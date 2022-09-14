#include<stdio.h>
////阶乘函数(递归)
//long fact(int n) {
//	return n == 0 ? 1 : n * fact(n - 1);
//}
//
////幂运算(递归)
//double dexp(double x, double n) {
//	int d = 1,i;
//	if (n < 0) {
//		n = -n;
//		x = 1 / x;
//	}
//	for (i = 0; i < n; ++i)
//		d *= x;
//	return d;
//}
//
////斐波那契(我用我自己,但是运算量巨大）
//long long fib(int n) {
//	return n < 2 ? 1 : fib(n - 1) + fib(n - 2);
//}
//
////斐波那契数列(计算少版,但不清晰)
//long long fib(int n) {
//	int a = 1, b = 1, i;
//	long long c = 1;
//	for (i = 2; i < n; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//斐波那契(无敌版)
long long fib1(long a, long b, int n) {
	return n-1 <= 0 ? b : fib1(a + b, a, n - 1);
}
long long fib(int n) {
	return fib1(1, 1, n);
}

//求最大公约数(辗转相除法)
long mod(long a, long b) {
	if (a < 0)a = -a;
	if (b < 0)b = -b;
	return a % b == 0 ? b : mod(b, a % b);
}

//求最大公约数(循环法)
long mod2(long a, long b) {
	long r;
	if (b == 0)return a;
	if (a < 0)a = -a;
	if (b < 0)b = -b;
	for (r = a % b; r != 0; r = a % b) {
		a = b;
		b = r;
	}
	return a;
}

int main() {
	printf("%lld", fib(45));
	return 0;
}