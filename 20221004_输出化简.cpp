#define _CRT_SECURE_NO_AWRNINGS
#include<stdio.h>

void cutspace(void) {
	char c1;
	do {
		c1 = getchar();
		if (c1 != ' ') {
			putchar(c1);
		}
		if (c1 == ' ') {
			while ((c1 = getchar()) == ' ');
			putchar(' ');
			putchar(c1);
		}
	} while (c1 != '\n');
}

void singleword(void) {
	char c1;
	do {
		c1 = getchar();
		if (c1 != ' ') {
			putchar(c1);
		}
		if (c1 == ' ') {
			while ((c1 = getchar()) == ' ');
			putchar('\n');
			putchar(c1);
		}
	} while (c1 != '\n');
}

int main() {
	cutspace();
	return 0;
}