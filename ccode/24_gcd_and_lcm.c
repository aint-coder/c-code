/*
 * Program 24: GCD and LCM
 * Description: Computes Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers.
 */
#include <stdio.h>

int main(void) {
    int n1, n2, a, b, temp, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    // Euclidean algorithm for GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (n1 * n2) / gcd;

    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);

    return 0;
}
