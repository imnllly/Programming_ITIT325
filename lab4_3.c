#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000  

int main() {
    srand(time(NULL));
    int size, odd = 0, n = 0, Zm[MAX_SIZE], Yn[MAX_SIZE], count = 0;
    printf("Enter arr size: "); scanf("%d", &size);
    if (size > MAX_SIZE) { size = MAX_SIZE; }
    printf("Zm: ");
    for (int i = 0; i < size; i++) {
        Zm[i] = rand() % 101;
        printf("%d \t", Zm[i]);
        if (Zm[i] % 2 != 0) {
            odd += Zm[i];
            n++;
        }
    }
    if (n > 0) {
        int sr_ar = odd / n;
        printf("\nAverage number: %d", sr_ar);
        printf("\nYn: ");
        for (int i = 0; i < size; i++) {
            if (Zm[i] < sr_ar) {
                Yn[count] = Zm[i];  
                printf("%d \t", Yn[count]);
                count++;
            }
        }
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - 1 - i; j++) {
                if (Yn[j + 1] < Yn[j]) {
                    int temp = Yn[j];
                    Yn[j] = Yn[j + 1];
                    Yn[j + 1] = temp;  
                }
            }
        }
        printf("\nSorted Yn: \n");
        for (int i = 0; i < count; i++) {  
            printf("%d \t", Yn[i]);
        }
    }
    else {
        printf("\nNo odd numbers found");
    }
    return 0;
}
