#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double sum(double n) {
	double sum = 0, i;
	for (i = 1; i <= n; ++i) {
		sum += 1/ i;
	}
	return sum;
}

int main() {
	double n, r;
	scanf("%lf", &n);
	r = sum(n) - log(n);
	printf("%lf", r);
	return 0;
}