/*
 * Program 17: Swap Two Numbers
 * Description: Swaps values using a temporary variable, and without a temporary variable.
 */
#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Method 1: Using temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swap with temp: a = %d, b = %d\n", a, b);

    // Method 2: Without temporary variable (swapping back)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping back without temp: a = %d, b = %d\n", a, b);

    return 0;
}
