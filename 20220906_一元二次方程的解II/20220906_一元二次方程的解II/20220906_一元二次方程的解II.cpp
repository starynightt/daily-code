#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a == 0) {
		printf("0");
	}
	else if (b * b - 4 * a * c < 0) {
		printf("-1");
	}
	else {
		printf("x1=%.2f\nx2=%.2f\n", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
	}
	return 0;
}