/*
 * Program 21: Area and Perimeter of a Rectangle
 * Description: Computes area and perimeter from user input length and width.
 */
#include <stdio.h>

int main(void) {
    float length, width, area, perimeter;

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area:      %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
