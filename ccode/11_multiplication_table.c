/*
 * Program 11: Multiplication Table
 * Description: Displays the multiplication table of a given number using a for loop.
 */
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &n);

    printf("--- Table of %d ---\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %2d = %d\n", n, i, n * i);
    }

    return 0;
}
