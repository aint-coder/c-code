/*
 * Program 23: Armstrong Number Checker
 * Description: Checks if a 3-digit number equals the sum of cubes of its digits (e.g., 153).
 */
#include <stdio.h>

int main(void) {
    int num, original, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == num) {
        printf("%d is an ARMSTRONG number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}
