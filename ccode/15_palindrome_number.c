/*
 * Program 15: Palindrome Number Checker
 * Description: Checks if a given number reads the same forwards and backwards.
 */
#include <stdio.h>

int main(void) {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a PALINDROME number.\n", original);
    } else {
        printf("%d is NOT a palindrome number.\n", original);
    }

    return 0;
}
