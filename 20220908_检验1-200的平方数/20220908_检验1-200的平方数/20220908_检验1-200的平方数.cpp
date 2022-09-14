#include<stdio.h>

int main() {
	int m, n;
	for (n = 1; n <= 200; n++)
		for (m = 1; m * m <= n; m++)
			if (m * m == n) {
				printf("%d ", n);
			};
	printf("\n");
	return 0;
}