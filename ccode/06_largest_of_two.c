/*
 * Program 06: Largest of Two Numbers
 * Description: Finds the maximum between two numbers using if-else.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if (b > a) {
        printf("%d is greater than %d\n", b, a);
    } else {
        printf("Both numbers are equal (%d).\n", a);
    }

    return 0;
}
