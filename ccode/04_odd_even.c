/*
 * Program 04: Check Odd or Even
 * Description: Checks if an entered integer is odd or even using if-else.
 */
#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is EVEN.\n", num);
    } else {
        printf("%d is ODD.\n", num);
    }

    return 0;
}
