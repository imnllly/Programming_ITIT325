#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> 

int main() {
	float x, y, w;
	printf("Enter x:"); scanf("%f", &x);
	if (x >= 3) { y = log10f(x) / log10f(2); }
		else if (x == 2 || x == 1) { y = powf(sinf(x), 2); }
			else { y = powf(cosf(x), 3); }
	if (x < 0 || fabs(2 * x + 0.8) == 0) { printf("Error!"); }
	else {
		w = exp(3 * y) / fabs(2 * x + 0.8);
		printf("w=%f", w);
	}
	return 0;
}
