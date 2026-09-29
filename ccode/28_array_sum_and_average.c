/*
 * Program 28: Array Elements Sum and Average
 * Description: Reads N elements into an array and calculates their sum and average.
 */
#include <stdio.h>

int main(void) {
    int n, i;
    float sum = 0.0, average;

    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 1;
    }

    float arr[100];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("\nSum:     %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
