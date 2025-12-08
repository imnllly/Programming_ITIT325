#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_SIZE 1000  

int getArrSize() {
    int size;
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    return size;
}
void fillArray(float* arr, int size) {
    for (int i = 0; i < size; i++) {
        *arr = (rand() % 201 - 100) + (rand() % 10) / 10.0;
        printf("%f \t", *arr);
        arr++;
    }
}

float sndPositive(float* arr, int size, int positive) {
    for (int i = 0; i < size; i++) {
        if (*arr > 0) { 
            positive++;
            if (positive == 2) { return *arr; } 
        } 
        arr++; 
    }
    return 0;
}

void integerElements(float* arr, int size) {
    printf("\nInteger elements: \t");
    for (int i = 0; i < size; i++) {
        if (fabsf(*arr - roundf(*arr)) < 0.0001f) { printf("%f ", *arr); }
        arr++;
    }
}

void newArr(float* arr, int size, float s_pos) {
    if (s_pos != 0) {
        printf("\nSecond positive element: %f\n", s_pos);
        for (int i = 0; i < size; i++) {
            if (i % 2 != 0) { printf("%f \t", s_pos); }
            else { printf("%f \t", *arr); }
            arr++;
        }
    }
    else { printf("\nThere is no second positive element, arr is same"); }
}


int main() {
    srand(time(NULL));
    int size; 
    float Yk[MAX_SIZE], s_pos = 0;
    size = getArrSize();
    fillArray(Yk, size);
    s_pos = sndPositive(Yk, size, 0);
    integerElements(Yk, size);
    newArr(Yk, size, s_pos);

    return 0;
}
