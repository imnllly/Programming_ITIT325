#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
	float x, y, t;
	printf("Enter x:"); scanf("%f", &x);
	if (x > 0) {y = powf(1 / tanf(x), 2);}
	else if (x == 1 || x == 2) {y = log10f(x) / log10f(3);}
	else {y = powf(fabs(x), x);}
	if ((powf(sinf(y), x) == 0) || (sinf(y) < 0)) {printf("Error!");}
	else { t = (exp(2 * x + y)) / powf(sinf(y), x); }
	printf("t=%f", t);
	return 0;
}
