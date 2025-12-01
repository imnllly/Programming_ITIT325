#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define MAX_SIZE 11  

int main() {
    srand(time(NULL));
    int column, num = 0;
    printf("Enter columns and rows num: "); scanf("%d", &column);
    if (column > MAX_SIZE) { column = MAX_SIZE; }
    if (column < 4 || column == MAX_SIZE) {
        printf("Martix is out of range");
    }
    else {
        float matrix[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < column; j++) {
                matrix[i][j] = (rand() % 15) + (rand() % 10) / 10.0;
                printf("Element [%d][%d]: %f\n", i, j, matrix[i][j]);
            }
        }
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < column; j++) {
                
                if ((j % 2 != 0) && (fabsf(matrix[i][j] - roundf(matrix[i][j])) < 0.0001f)) { num++; }
                printf("%f\t", matrix[i][j]);
            }
            printf("\n");
        }
        printf("Num: %d\n", num);
        printf("New arr:\n");
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < column; j++) {
                if (j + 1 < (column - i)) { matrix[i][j] = num; }
                printf("%f\t", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
