/*
 * Program 05: Check Positive, Negative, or Zero
 * Description: Determines if an entered number is positive, negative, or zero using if-else-if ladder.
 */
#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
