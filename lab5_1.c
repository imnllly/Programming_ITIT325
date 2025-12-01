#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_SIZE 11  

int main() {
    srand(time(NULL));
    int column, rows;
    bool flag = 0, flag_zero = 0;
    printf("Enter rows num: "); scanf("%d", &rows);
    printf("Enter columns num: "); scanf("%d", &column);
    if (rows > MAX_SIZE) { rows = MAX_SIZE; }
    if (column > MAX_SIZE) { column = MAX_SIZE; }
    if (column < 4 || column == MAX_SIZE || rows < 4 || rows == MAX_SIZE) {
        printf("Martix is out of range");
    }
    else {
        int matrix[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                matrix[i][j] = rand() % 15;
                printf("Element [%d][%d]: %d\n", i, j, matrix[i][j]);
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < column; j++) {
                if (matrix[i][j] == 0) { flag_zero = 1; }
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
        if (flag_zero) {
            printf("Rows with 0 (number of zeros in row): ");
            for (int i = 0; i < rows; i++) {
                flag = 0;
                int null_num = 0;
                for (int j = 0; j < column; j++) {
                    if (matrix[i][j] == 0) {
                        null_num++;
                        if (!flag) {
                            printf("%d", i + 1);
                            flag = 1;
                        }
                    }
                }
                if (null_num > 0) { printf("(%d), ", null_num); }
            }
        }
        else { printf("There are no rows with 0"); }
    }
    return 0;
}
