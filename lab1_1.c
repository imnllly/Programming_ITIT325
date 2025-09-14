#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int main() {
    float a, b, c, z;
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("Enter c:");
    scanf("%f", &c);
    if ((b == 0) || ((2 * a + b - c) < 0)) {
        printf("Error!");
    }
    else {
        z = (powf(a, (b - c)) * sin(c / b) + powf((2 * a + b - c), 1.0 / 3.0) - 2.6);
        printf("z=%f", z);
    }
    return 0;
}
