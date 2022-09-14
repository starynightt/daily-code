#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float R, r1, r2;
	scanf("%f%f", &r1, &r2);
	R = r1 * r2/ (r1 + r2);
	printf("%.2f\n", R);
	return 0;
}