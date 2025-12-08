#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000

int main() { 
    
    srand(time(NULL));
    int size, Xn[MAX_SIZE], num_odd = 0;
    int* ptr = Xn; // Объявление указателя
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    for (int i = 0; i < size; i++) {
        *ptr = rand() % 201 - 100; // Указатель вместо Xn[i]
        printf("%d \t", *ptr); // Указатель вместо Xn[i]
        if (abs(*ptr) % 2 != 0) { num_odd++; } // Указатель вместо Xn[i]
        ptr++; // Увеличение указателя на 1
    }
    ptr = Xn; //
    printf("\nOdd arr elements num: %d", num_odd);
    printf("\nAll negative arr elements indexes: ");
    for (int i = 0; i < size; i++) {
        if (*ptr < 0) { printf("%d\t", i); } // Указатель вместо Xn[i]
        ptr++; // Увеличение указателя на 1
    }
    return 0;
}
