#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
const int max = 2e5 + 10;
long long num[max] = { 0 };
long long sum[max] = { 0 };
long long sum2[max] = { 0 };
long long maxn[max] = { 0 };

int main() {
	using namespace std;
	int m, n;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%lld", &num[i]);
	}
	sum[0] = num[0];
	sum2[0] = num[0];
	for (int i = 1; i < n; ++i) {
		sum[i] = sum[i - 1] + num[i];
		sum2[i] = sum2[i - 1] + (i + 1) * num[i];
	}
	maxn[0] = sum2[m - 1];
	for (int i = 1; i + m - 1 < n; ++i) {
		maxn[i] = sum2[m + i - 1] - sum2[i - 1] - i * (sum[m + i - 1] - sum[i - 1]);
	}
	sort(maxn, maxn + n - m + 1);
	printf("%lld", maxn[n - m]);
	return 0;
}