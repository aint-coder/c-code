/*
 * Program 03: Basic Arithmetic Operations
 * Description: Performs addition, subtraction, multiplication, division, and modulus on two numbers.
 */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition:       %d + %d = %d\n", a, b, a + b);
    printf("Subtraction:    %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division:       %d / %d = %d\n", a, b, a / b);
        printf("Modulus:        %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus by zero are not allowed!\n");
    }

    return 0;
}
