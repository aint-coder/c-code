/*
 * Program 27: Star Pyramid Pattern
 * Description: Prints a right-angled triangle / pyramid star pattern using nested for loops.
 */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n--- Pattern 1: Right-Angled Triangle ---\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n--- Pattern 2: Centered Pyramid ---\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
