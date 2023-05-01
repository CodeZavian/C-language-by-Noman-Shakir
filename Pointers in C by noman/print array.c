#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Take input from the user to store elements in the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements using pointers
    printf("Array elements using pointer:\n");
    int* ptr = arr; // Point to the first element of the array

    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr); // Dereference the pointer to get the value at the current index
        ptr++; // Move the pointer to the next element in the array
    }

    printf("\n");

    return 0;
}
