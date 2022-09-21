#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[2500][3], i, j, num, sum = 0, i2, j2;
	scanf("%d%d\n" ,&i2, &j2);
	for (i = 0; i < i2; ++i) {
		for (j = 0; j < j2; ++j) {
			scanf("%d", &num);
			if (num != 0) {
				arr[sum][0] = i;
				arr[sum][1] = j;
				arr[sum++][2] = num;
			}
		}
	}
	printf("%d %d %d\n", i2, j2, sum);
	for (i = 0; i < sum; ++i) {
		printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
	}
	return 0;
}
