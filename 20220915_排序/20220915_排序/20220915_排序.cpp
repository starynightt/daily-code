#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void sort(int arr[],int n) {
	int i;
	for (i = 0; i < n - 1; ++i) {
		int j = 0;
		for (j = 0; j < n-1-i; ++j) {
			if (arr[j] > arr[j + 1]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main() {
	int n;
	int i, a, d = 0, b;
	int arr[100000];
	scanf("%d\n", &n);
	for (b = 0; b < n; ++b) {
		scanf("%d", &a);
		arr[d] = a;
		++d;
	}
	arr[b + 1] = '\0';
	sort(arr,n);
	for (i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}