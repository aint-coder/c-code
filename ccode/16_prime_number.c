/*
 * Program 16: Prime Number Checker
 * Description: Checks if an integer is a prime number using a for loop and if-else.
 */
#include <stdio.h>

int main(void) {
    int n, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a PRIME number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    return 0;
}
