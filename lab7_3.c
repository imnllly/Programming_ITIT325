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

void fillArray(int* arr, int size) {
    printf("Zm: ");
    for (int i = 0; i < size; i++) {
        *arr = rand() % 101;
        printf("%d \t", *arr);
        arr++;
    }
}

int averageOddNum(int* arr, int size) {
    int odd = 0, n = 0;
    for (int i = 0; i < size; i++) {
        if (*arr % 2 != 0) {
            odd += *arr;
            n++;
        }
        arr++;
    }
    if (n != 0) { return odd / n; }
    else { return -1; } 
}

int newArr(int* arr, int* arr2, int size, int sr_ar) {
    int count = 0;
    if (sr_ar >= 0) {
        printf("\nAverage number: %d", sr_ar);
        printf("\nYn: ");
        for (int i = 0; i < size; i++) {
            if (*arr < sr_ar) {
                *arr2 = *arr;
                printf("%d \t", *arr2);
                arr2++;
                count++;
            }
            arr++;
        }
        return count;
    }
    else {
        printf("\nNo odd numbers found");
        return 0;
    }
}

void sortedArr(int* arr, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (*(arr + j + 1) < *(arr + j)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("\nSorted Yn: \n");
    for (int i = 0; i < count; i++) {
        printf("%d \t", *(arr + i));
    }
}

int main() {
    srand(time(NULL));
    int size, Zm[MAX_SIZE], Yn[MAX_SIZE];
    size = getArrSize();
    fillArray(Zm, size);
    int sr_ar = averageOddNum(Zm, size);
    int count = newArr(Zm, Yn, size, sr_ar);
    if (count > 0) {
        sortedArr(Yn, count);
    }
    return 0;
}
