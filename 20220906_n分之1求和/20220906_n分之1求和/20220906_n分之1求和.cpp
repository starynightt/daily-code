#include<stdio.h>

int main() {
	double n = 1, sum = 0;
	while (n <= 101) {
	    sum = sum + 1/n;
		n = n + 1;
	}
	printf("%f\n", sum);
	return 0;	
}