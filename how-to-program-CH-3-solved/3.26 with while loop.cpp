#include <stdio.h>

int main() {
  int counter = 0, number, largest1, largest2;

  while (counter < 10) {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > largest1) {
      largest2 = largest1;
      largest1 = number;
    } 
//	else if (number > largest2) {
//      largest2 = number;
//    }
//
//    counter++;
  }

  printf("Largest numbers: %d \n", largest1);

  return 0;
}
