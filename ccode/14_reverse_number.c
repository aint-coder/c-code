/*
 * Program 14: Reverse an Integer
 * Description: Reverses the digits of an integer using a while loop.
 */
#include <stdio.h>

int main(void) {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Original: %d | Reversed: %d\n", original, reversed);

    return 0;
}
