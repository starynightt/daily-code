#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	double y,x;
	scanf("%lf", &x);
	y = pow(1 + 1 / x, x);
	printf("%lf", y);
	return 0;
}