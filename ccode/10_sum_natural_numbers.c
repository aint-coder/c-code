/*
 * Program 10: Sum of First N Natural Numbers
 * Description: Calculates the sum of numbers from 1 to N using a for loop.
 */
#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
