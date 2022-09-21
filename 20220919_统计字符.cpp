#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

int main() {
	int arr[4] = { 0,0,0,0 };
	char c;
	while ((c = getchar()) != '\n') {
		if (isalpha(c))
			arr[0]++;
		else if (isdigit(c))
			arr[1]++;
		else if (isspace(c))
			arr[2]++;
		else
			arr[3]++;
	}
	printf("letter=%d\nspace=%d\ndigit=%d\nother=%d\n", arr[0], arr[2], arr[1], arr[3]);
	return 0;
}