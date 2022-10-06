#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum{NUM=100000};
int hum[NUM] = { 0 };
long ci[NUM] = { 0 };

void scan(long ci[NUM], int n) {
    int i, c;
    for (i = 0; i < n - 1; ++i) {
        scanf("%d", &c);
        ci[i] = c;
    }
}

int main() {
    int n, i;
    long long sum=0;
    scanf("%d", &n);
    scan(ci, n);
    for (i = 0; i < n - 1; ++i) {
        sum += ci[i] * (i + 2);
    }
    printf("%lld", sum);
    return 0;
}
                               