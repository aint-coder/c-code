/*
 * Program 09: Print Numbers from 1 to N
 * Description: Prints numbers from 1 to N using a for loop.
 */
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
