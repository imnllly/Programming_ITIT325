#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int main() {
    float x, y, r;
    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);
    if ((x < 0) || ((2*y+4)==0) || ((x + 2*y)<0) || ((powf((x + 2 * y), 1.0 / 3.0) + powf(y, 2))==0)) {
        printf("Error!");
    }
    else {
        r = ((powf(sin(x / (2 * y + 4)), 2) + sqrt(x)) / (powf((x + 2 * y), 1.0 / 3.0) + powf(y, 2)));
        printf("r=%f", r);
    }
    return 0;
}
