#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include<stdio.h>
#include<math.h>

double Dn(int n, double x) {
	double a = 0, b = 0, c = 0;
	int i;
	a = cos(x);
	b = cos(2 * x);
	if (n == 1) {
		return cos(x);
	}
	if (n == 2) {
		return cos(2 * x);
	}
	for (i = 2; i < n; ++i) {
		c = 2 * cos(x) * b - a;
		a = b;
		b = c;
	}
	return c;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lf", Dn(n, PI / 3));
	return 0;
}