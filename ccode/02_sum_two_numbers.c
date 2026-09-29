/*
 * Program 02: Sum of Two Numbers
 * Description: Takes two integers as input from the user and displays their sum.
 */
#include <stdio.h>

int main(void) {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum: %d + %d = %d\n", num1, num2, sum);

    return 0;
}
