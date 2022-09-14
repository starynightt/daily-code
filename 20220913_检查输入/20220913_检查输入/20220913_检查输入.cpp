#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	while (scanf("%d", &a) == 1) {
		if (getchar() != '+' || scanf("%d", &b) != 1) {
			printf("ERROR\n");
			while (getchar() != '\n')
				;
		}
		else {
			printf("%d+%d=%d\n", a, b, a + b);
		}	
	}
	return 0;
}