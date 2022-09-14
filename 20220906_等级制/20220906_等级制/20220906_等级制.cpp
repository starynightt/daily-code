#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	float X;
	scanf("%f", &X);
	if (X >= 90) {
		printf("%c\n", 'A');
	}
	else if (X >= 80 && X <= 90) {
		printf("%c\n", 'B');
	}
	else if (X >= 70 && X <= 80) {
		printf("%c\n", 'C');
	}
	else if (X >= 60 && X <= 70) {
		printf("%c\n", 'D');
	}
	else {
		printf("%c\n", 'E');
	}
	return 0;
}