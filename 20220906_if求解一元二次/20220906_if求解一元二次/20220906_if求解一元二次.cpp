#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (b * b - 4 * a * c < 0){
		printf("No answer");
	}
	else {
		printf("%f%f", (-b + sqrt(b * b - 4 * a * c)) / 2 * a, (-b - sqrt(b * b - 4 * a * c) )/ 2 * a);
	}
	return 0;
}