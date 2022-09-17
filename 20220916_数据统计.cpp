#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[21], i,n=1;
	char c;
	for (i = 0; i <= 20; ++i)
		arr[i] = 0;
	for (;;++n) {
		scanf("%d%c", &i,&c);
		arr[i]+=1;
		if (c==10)break;
	}
	printf("%d\n", n);
	for (i = 0; i <= 20; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
} 