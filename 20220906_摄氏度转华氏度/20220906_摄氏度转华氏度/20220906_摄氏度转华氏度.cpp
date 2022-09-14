#include<stdio.h>

int main() {
	double c = 1, f;
	while (c<=100){
		f = c * 9 / 5 + 32;
		printf("F°=%.1f\n", f);
		c += 1;
	}
	return 0;
}