#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int s(float x) {
	return x;
}
int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (b - a >= 0 && c - b >= 0) {
		printf("%d %d %d\n", s(a), s(b), s(c));
	}
	else if (c - a >= 0 && b - c >=0) {
		printf("%d %d %d\n", s(a), s(c), s(b));
	}
	else if (a - c >= 0 && b - a >= 0) {
		printf("%d %d %d\n", s(c), s(a), s(b));
	}
	else if (a - b >= 0 && c - a >= 0) {
		printf("%d %d %d\n", s(b), s(a), s(c));
	}
	else if (c - b >= 0 && a - c >= 0) {
		printf("%d %d %d\n", s(b), s(c), s(a));
	}
	else {
		printf("%d %d %d\n", s(c), s(b), s(a));
	}
	return 0;
}