#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(){
	int i, n;
	double pi=0; 
	scanf("%d", &n);
	for ( i=1;(2*i-1)<=n ; ++i)
		pi =pi+ pow((- 1), i + 1)/ (2 * i - 1);
	printf("%.8f\n", 4*pi);
	return 0;
}