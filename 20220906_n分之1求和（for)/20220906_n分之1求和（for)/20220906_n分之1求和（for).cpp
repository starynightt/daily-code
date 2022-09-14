#include<stdio.h>

double sum_n(int i) {
	double n, sum;
	for (n = 1,sum=0; n <= i; n++) {
		sum += 1 / n;
	}
	return sum;
}

int main() {
	printf("%f", sum_n(101));
	return 0;
}