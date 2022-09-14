#include<stdio.h>

int main() {
	long long n = 1, sum = 1;
	while (n<=20){/*n>20会溢出*/
		sum *= n;
		n = n + 1;
	}
	printf("%lld", sum);
	return 0;
}