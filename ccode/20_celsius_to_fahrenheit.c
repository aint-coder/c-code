/*
 * Program 20: Celsius to Fahrenheit & Vice Versa
 * Description: Converts temperature between Celsius and Fahrenheit.
 */
#include <stdio.h>

int main(void) {
    int choice;
    float temp, converted;

    printf("Temperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32.0;
        printf("%.2f C = %.2f F\n", temp, converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32.0) * 5.0 / 9.0;
        printf("%.2f F = %.2f C\n", temp, converted);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
