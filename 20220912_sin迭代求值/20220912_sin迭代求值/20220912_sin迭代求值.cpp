#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592653589793
#include<stdio.h>
#include<math.h>

double dsin(double x) {
	double sum, t;
	int n;
	x = fmod(x, pi);
	for (t = fmod(x, pi), n = 1, sum = 0; t >= 1E-6 || t <= 1E-6; ++n) {
		sum += t;
		t = -t * fmod(x, pi) * fmod(x,pi) / (2 * n) / (2 * n + 1);
	}
	return sum;
}

int main() {
	double a;
	scanf("%lf", &a);
	printf("%f\n", dsin(a));
	return 0;
}