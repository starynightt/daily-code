#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a(int a) {
    return a;
}

int main() {
    int n, m;
    float rab, chic;
    scanf("%d%d", &n, &m);
    rab = (m - 2 * n) / 2.0;
    chic = (4 * n - m) / 2.0;
    if (rab - a(rab)> 0 + chic - a(chic) > 0, rab * chic < 0) {
        printf("No answer\n");;
    }
    else
    {
        printf("%.0f %.0f\n", chic, rab);
    }
    return 0;
}