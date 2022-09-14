#include<stdio.h>

int main() {
	float c;
	for (c = 1; c <= 100; c += 1)
		printf("F°=%.1f\n", c * 9 / 5 + 32);
	return 0;
}