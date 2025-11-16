#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_SIZE 11  

int main() {
    srand(time(NULL));
    int column, rows, c, b;
    printf("Enter rows num: "); scanf("%d", &rows);
    printf("Enter columns num: "); scanf("%d", &column);
    printf("Enter C: "); scanf("%d", &c);
    printf("Enter B: "); scanf("%d", &b);
    if (rows > MAX_SIZE) { rows = MAX_SIZE; }
    if (column > MAX_SIZE) { column = MAX_SIZE; }
    if (column < 4 || column == MAX_SIZE || rows < 4 || rows == MAX_SIZE) {
        printf("Martix is out of range"); 
    }
    else if (c > b) { printf("C is bigger than B"); }
    else {
        int matrix[MAX_SIZE][MAX_SIZE];
        float arr[MAX_SIZE] = { 0 };
        for (int i = 0; i < rows; i++) {
            float summ = 0;
            for (int j = 0; j < column; j++) {
                matrix[i][j] = rand() % 15;
                summ += matrix[i][j];
                printf("%d\t", matrix[i][j]);
            }
            printf("\nSumm = %f\n", summ);
            float sr_ar = summ / column;
            if (sr_ar >= c && sr_ar <= b) { arr[i] = sr_ar; }
        }
        printf("Arr: ");
        for (int i = 0; i < rows; i++) {
            if (arr[i] != 0.0) { printf("%f\t", arr[i]); }
        }
    }
    return 0;
}
