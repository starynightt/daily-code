#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a;
	scanf("%c", &a);
	if (a==65)
	{
		printf("Very good!\n");
	}
	else if (a==66)
	{
		printf("Good!\n");
	}
	else if (a==67)
	{
		printf("OK!\n");
	}
	else if (a==68)
	{
		printf("Bad!\n");
	}
	else if (a==69)
	{
		printf("Too bad!\n");
	}
	return 0;
}