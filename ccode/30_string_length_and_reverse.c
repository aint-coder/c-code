/*
 * Program 30: String Length and Reverse
 * Description: Calculates the length of a string and reverses it without string library functions.
 */
#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0, i;

    printf("Enter a string (single word): ");
    scanf("%s", str);

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
