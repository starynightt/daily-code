#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>

long long fib(int n) {
	return n < 2 ? 1 : fib(n - 1) + fib(n - 2);
}

int main() {
	int n,d;
	for (n=1; n <= 100; ++n) {
		d = n % 2;
		switch (d) {
		case 0:printf("%d 偶数\n",n); break;
		case 1:printf("%d 奇数\n",n); break;
		}
	}
	return 0;
}