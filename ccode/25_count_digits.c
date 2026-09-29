/*
 * Program 25: Count Digits in an Integer
 * Description: Counts the number of digits in an integer using a while loop.
 */
#include <stdio.h>

int main(void) {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) n = -n;
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
