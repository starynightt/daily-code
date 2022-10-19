#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num[1005], prime[1005] = { 0 };
	int i, j = 2, n, k, j2, j3, count = 0;
	scanf("%d%d", &n, &k);
	for (i = 0; i <= n; ++i) {
		num[i] = 1;
	}
	num[0] = 0; num[1] = 0;
	for (i = 0; i <= n; ++i) {
		if (num[i]) {
			for (j = 2 * i; j < n; j += i) {
				num[j] = 0;
			}
		}
	}
	for (i = 0, j = 0; i <= n; ++i) {
		if (num[i]) {
			prime[j] = i;
			++j;
		}
	}
	for (i = 0; i < j; ++i) {
		for (j2 = 0; 2 * j2 < prime[i]; ++j2) {
			if (prime[j2] + prime[j2 + 1] == prime[i] - 1) {
				count++;
				break;
			}
		}
	}
	if (count >= k) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}