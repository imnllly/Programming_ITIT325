#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000  

int main() {
    srand(time(NULL));
    int size, odd = 0, n = 0, Zm[MAX_SIZE], Yn[MAX_SIZE], count = 0;
    int* ptr = Zm; // Объявление указателя
    int* countr = Yn; // Объявление указателя
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    printf("Zm: ");
    for (int i = 0; i < size; i++) {
        Zm[i] = rand() % 101;
        printf("%d \t", *ptr); // Указатель вместо Zm[i]
        if (*ptr % 2 != 0) { // Указатель вместо Zm[i]
            odd += *ptr; // Указатель вместо Zm[i]
            n++;
        }
        ptr++; // Увеличение указателя на 1
    }
    if (n > 0) {
        int sr_ar = odd / n;
        printf("\nAverage number: %d", sr_ar);
        printf("\nYn: ");
        ptr = Zm; // 
        countr = Yn; //
        count = 0;
        for (int i = 0; i < size; i++) {
            if (*ptr < sr_ar) { // Указатель вместо Zm[i]
                *countr = *ptr; // Указатель вместо Zm[i], Yn[count]
                printf("%d \t", *countr); // Указатель вместо Yn[count]
                countr++; // Увеличение указателя на 1
                count++;
            }
            ptr++; // Увеличение указателя на 1
        }
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - 1 - i; j++) {
                if (*(Yn + j + 1) < *(Yn + j)) { // Указатели 
                    int temp = *(Yn + j);
                    *(Yn + j) = *(Yn + j + 1);
                    *(Yn + j + 1) = temp; 
                }
            }
        }
        printf("\nSorted Yn: \n");
        countr = Yn; // 
        for (int i = 0; i < count; i++) {
            printf("%d \t", *countr); // Указатель вместо Yn[i]
            countr++; // Увеличение указателя на 1
        }
    }
    else {
        printf("\nNo odd numbers found");
    }
    return 0;
}
