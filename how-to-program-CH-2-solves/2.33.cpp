#include <stdio.h>

int main() {
  double miles, costPerGallon, milesPerGallon, parkingFees, tolls, dailyCost;

  printf("Enter total miles driven per day: ");
  scanf("%lf", &miles);

  printf("Enter cost per gallon of gasoline: $");
  scanf("%lf", &costPerGallon);

  printf("Enter average miles per gallon: ");
  scanf("%lf", &milesPerGallon);

  printf("Enter parking fees per day: $");
  scanf("%lf", &parkingFees);

  printf("Enter tolls per day: $");
  scanf("%lf", &tolls);

  dailyCost = (miles / milesPerGallon) * costPerGallon + parkingFees + tolls;

  printf("Your daily driving cost is: $%.2lf\n", dailyCost);

  return 0;
}
