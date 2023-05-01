#include <stdio.h>

int main(void) {
    // Declare variables to store the current population and growth rate
    int population;
    float growth_rate;

    // Read the current population and growth rate from the user
    printf("Enter the current world population: ");
    scanf("%d", &population);
    printf("Enter the annual world population growth rate: ");
    scanf("%f", &growth_rate);

    // Calculate and print the estimated population after one, two, three, four, and five years
    printf("Estimated population after 1 year: %d\n", population + (int)(population * growth_rate));
    printf("Estimated population after 2 years: %d\n", population + (int)(population * growth_rate * 2));
    printf("Estimated population after 3 years: %d\n", population + (int)(population * growth_rate * 3));
    printf("Estimated population after 4 years: %d\n", population + (int)(population * growth_rate * 4));
    printf("Estimated population after 5 years: %d\n", population + (int)(population * growth_rate * 5));

    return 0;
}
