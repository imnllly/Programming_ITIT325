#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000  

int main() {
    srand(time(NULL));
    int size;
    printf("Enter array size: "); scanf("%d", &size);
    if (size > MAX_SIZE) size = MAX_SIZE;
    int Xn[MAX_SIZE];
    int num_odd = 0;
    for (int i = 0; i < size; i++) {
        Xn[i] = rand() % (2 * 100 + 1) - 100;
        printf("%d \t", Xn[i]);
    }
    for (int i = 0; i < size; i++) {
        if (abs(Xn[i]) % 2 != 0) {
            num_odd++;
        }
    }
    printf("\nOdd arr elements num: %d", num_odd);
    printf("\nAll negative arr elements indexes: ");
    for (int i = 0; i < size; i++) {
        if (Xn[i] < 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}
