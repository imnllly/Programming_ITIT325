#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 1000  

int main() {
    srand(time(NULL));
    int size, k = 0, n = 0;
    float Yk[MAX_SIZE], s_pos = 0;
    float* ptr = Yk; // Объявление указателя
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    for (int i = 0; i < size; i++) {
        Yk[i] = (rand() % 201 - 100) + (rand() % 10) / 10.0;
        printf("%f \t", *ptr); // Указатель вместо Yk[i]
        if (*ptr > 0) { // Указатель вместо Yk[i]
            k++;
            if (k == 2) { s_pos = *ptr; } // Указатель вместо Yk[i]
            else if (k > 2) { break; }
        }
        if (fabsf(*ptr - roundf(*ptr)) < 0.0001f) { n++; } // Указатель вместо Yk[i]
        ptr++; // Увеличение указателя на 1
    }
    ptr = Yk; //
    if (n == 0) { printf("\nThere are no integer elements"); }
    else {
        printf("\nInteger elements: \t");
        for (int i = 0; i < size; i++) {
            if (fabsf(*ptr - roundf(*ptr)) < 0.0001f) { printf("%f \t", *ptr); } // Указатель вместо Yk[i]
            ptr++; // Увеличение указателя на 1
        }
    }
    ptr = Yk; //
    if (s_pos != 0) {
        printf("\nSecond positive element: %f\n", s_pos);
        for (int i = 0; i < size; i++) {
            if (i % 2 != 0) { printf("%f \t", s_pos); }
            else { printf("%f \t", *ptr); }
            ptr++; // Увеличение указателя на 1
        } 
    }
    else { printf("\nThere is no second positive element, arr is same"); }

    return 0;
}
