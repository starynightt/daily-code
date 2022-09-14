#include<stdio.h>

int main() {
	int m;
	for (m = 1; m * m <= 200; m++)
		printf("%d ", m*m);
	return 0;
}
