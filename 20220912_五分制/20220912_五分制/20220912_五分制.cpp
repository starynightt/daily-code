#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	switch (n){
	case 5:printf("A\n"); break;
	case 4:printf("B\n"); break;
	case 3:printf("C\n"); break;
	case 2:printf("D\n"); break;
	case 1:printf("E\n"); break;
	}
	return 0;
}