#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int max1 = -2147483648, max2 = -2147483648, c;
	do {
		scanf("%d", &c);
		if (c >= max1) {
			max2 = max1;
			max1 = c;
		}
		if (c > max2 && c < max1) {
			max2 = c;
		}
		c = getchar();
	} while (c != '\n');
	printf("%d %d", max1, max2);
	return 0;
}