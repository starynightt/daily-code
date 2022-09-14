#include<stdio.h>

int main() {
	int n,m;
	for (n = 1, m = 1; n + 2 * m + 1 < 200; m++) {
		n += 2 * m + 1;
		printf("%d ", n);
	}
	printf("\n");
	return 0;
}
