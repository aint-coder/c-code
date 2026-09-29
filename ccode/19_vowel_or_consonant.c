/*
 * Program 19: Vowel or Consonant Checker
 * Description: Checks if an input alphabet character is a vowel or consonant.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch, lower;

    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a VOWEL.\n", ch);
        } else {
            printf("'%c' is a CONSONANT.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
