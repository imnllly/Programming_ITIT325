#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000

int getArrSize() {
    int size;
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    return size;
}

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *arr = rand() % 201 - 100; 
        arr++;
    }
}


int printArrayAndCountOdd(int* arr, int size) {
    int num_odd = 0;
    for (int i = 0; i < size; i++) {
        printf("%d \t", *arr);
        if (abs(*arr) % 2 != 0) { num_odd++; }
        arr++;
    }
    return num_odd;
}

void printNegativeIndexes(int* arr, int num_odd, int size) {
    printf("\nOdd arr elements num: %d", num_odd);
    printf("\nAll negative arr elements indexes: ");
    for (int i = 0; i < size; i++) {
        if (*arr < 0) { printf("%d\t", i); }
        arr++;
    }
}

int main() {
    srand(time(NULL));
    int size, Xn[MAX_SIZE], num_odd = 0;
    size = getArrSize();
    fillArray(Xn, size);
    num_odd = printArrayAndCountOdd(Xn, size);
    printNegativeIndexes(Xn, num_odd, size);
    return 0;
}
