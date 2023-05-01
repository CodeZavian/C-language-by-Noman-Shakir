#include <stdio.h>

int main(void) {
    // Declare variables to store radius, diameter, circumference, and area
    float radius, diameter, circumference, area;

    // Read radius from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    // Print results
    printf("Diameter of circle: %f\n", diameter);
    printf("Circumference of circle: %f\n", circumference);
    printf("Area of circle: %f\n", area);

    return 0;
}
