#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>



int main() {
	int K;
	float res = 0;
	double pi_4 = atan(1.0);
	printf("Enter K: "); scanf("%d", &K);
	if (K < 1) {
		printf("Error!!!");
	}
	else {
		for (int k = 1; k <= K; k++) {
			res += exp(k) * sinf(k * pi_4);
		}
		printf("Res = %f", res);
	}
	return 0;
}
