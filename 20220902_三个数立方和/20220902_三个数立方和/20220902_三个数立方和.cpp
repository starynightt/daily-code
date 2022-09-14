#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%.0f\n", pow(a, 3) + pow(b, 3) + pow(c, 3));
	return 0;
}