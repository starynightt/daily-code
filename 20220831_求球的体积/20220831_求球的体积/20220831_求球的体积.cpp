#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float r;
	scanf("%f", &r);
	printf("V=%fcm^3\n", 3.1416 * r * r * r * 4 / 3);
	return 0;
}