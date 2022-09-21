#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[2500][3], i, j, num, c = 0, sum = 0, i2, j2;
	scanf("%d%d\n" ,&i2, &j2);
	for (i = 0; i < i2; ++i) {
		for (j = 0; j < j2; ++j) {
			scanf("%d", &num);
			if (num != 0) {
				arr[c][0] = i;
				arr[c][1] = j;
				arr[c++][2] = num;
				sum++;
			}
		}
	}
	printf("%d %d %d\n", j2, i2, sum);
	for (i = 0; i < c; ++i) {
		printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
	}
	return 0;
}
