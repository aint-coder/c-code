/*
 * Program 07: Largest of Three Numbers
 * Description: Finds the largest among three numbers using logical operators.
 */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest number is: %d\n", b);
    } else {
        printf("Largest number is: %d\n", c);
    }

    return 0;
}
