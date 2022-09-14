#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n < m) {
		while (n <= m){
			if (n % 3 != 0 && n != 0){
				printf("%d ", n);
			}
			n++;
		}
     }
	else{
		while (m <=n){
			if (m % 3 != 0 && m != 0){
				printf("%d ", m);
			}
			m++;
		}
	}
	return 0;
}