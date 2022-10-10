#include<stdio.h>
char num[100000000];

int main() {
	int c,i;
	for (i=0; (c = getchar()) != '\n';++i) {
		num[i] = c;
	}
	if (num[0] == '-') {
		printf("-");
	}
	for (; i >= 0; --i) {
		if (num[i] != '-'&&num[i]!='0')
			printf("%c", num[i]);
	}
	printf("\n");
	return 0;
}