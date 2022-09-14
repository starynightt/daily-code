#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isprime(int b) {
	int a;
	for (a = 2; a * a <= b ; ++a)
		if (b <= 1 || b % a == 0) {
			return 0; 
	}
	return b;
}

int main() {
	int m, n;
	scanf("%d%d",&m, &n);
	for (; m <= n; ++m) {
		if (isprime(m) != 0 && m != 1){
			printf("%d ", isprime(m));
		}
	}
		return 0;
}