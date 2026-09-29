/*
 * Program 22: Area and Circumference of a Circle
 * Description: Computes area and circumference using formula with PI = 3.14159.
 */
#include <stdio.h>

#define PI 3.14159265359

int main(void) {
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area:          %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
