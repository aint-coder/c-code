/*
 * Program 26: Power of a Number
 * Description: Computes base raised to the power exponent using a for loop.
 */
#include <stdio.h>

int main(void) {
    int base, exp, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter non-negative exponent: ");
    scanf("%d", &exp);

    for (i = 0; i < exp; i++) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exp, result);

    return 0;
}
