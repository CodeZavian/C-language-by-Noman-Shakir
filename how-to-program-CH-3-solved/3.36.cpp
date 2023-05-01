#include <stdio.h>

int main(void) {
    // Loop through all three-digit numbers
    for (int i = 100; i < 1000; i++) {
        // Extract the digits of the number
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        // Check if the number is an Armstrong number
        if (a*a*a + b*b*b + c*c*c == i) {
            // Print the Armstrong number
            printf("%d\n", i);
        }
    }

    return 0;
}
