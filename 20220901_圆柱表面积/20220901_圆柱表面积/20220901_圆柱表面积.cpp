#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*定义一个函数 S_pan(x,y)*/
double S_pan(double r, double h) {
	return 2 * r * r * 3.141592654 + 2 * r * 3.141592654 * h;
}
int main() {
	float a, b;
	scanf("%f%f", &a, &b);
	printf("Area = %.3f\n", S_pan(a, b));
	return 0;
}