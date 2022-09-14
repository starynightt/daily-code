#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a=1, b=0;
	while (a!= 0) {
		scanf("%d",&a);
		b += a;
	}
	printf("%d\n",b);
	return 0;
}