#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  int sum, average, product;
  int smallest, largest;

  // Input three integers from the keyboard
  printf("Enter three different integers: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  // Calculate the sum of the three integers
  sum = num1 + num2 + num3;

  // Calculate the average of the three integers
  average = (num1 + num2 + num3) / 3;

  // Calculate the product of the three integers
  product = num1 * num2 * num3;

  // Determine the smallest of the three integers
  smallest = num1;
  if (num2 < smallest) {
    smallest = num2;
  }
  if (num3 < smallest) {
    smallest = num3;
  }

  // Determine the largest of the three integers
  largest = num1;
  if (num2 > largest) {
    largest = num2;
  }
  if (num3 > largest) {
    largest = num3;
  }

  // Print the results
  printf("Sum is %d\n", sum);
  printf("Average is %d\n", average);
  printf("Product is %d\n", product);
  printf("Smallest is %d\n", smallest);
  printf("Largest is %d\n", largest);

 
}

