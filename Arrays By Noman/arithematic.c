#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Using pointer arithmetic to access array elements
    }
    printf("\n");

    // Incrementing the pointer
    ptr++;
    printf("Value after incrementing: %d\n", *ptr);

    // Decrementing the pointer
    ptr--;
    printf("Value after decrementing: %d\n", *ptr);

    // Adding an offset to the pointer
    ptr += 2;
    printf("Value after adding offset: %d\n", *ptr);

    // Subtracting an offset from the pointer
    ptr -= 1;
    printf("Value after subtracting offset: %d\n", *ptr);

    // Accessing an element using array subscript notation
    printf("Accessing element using array subscript: %d\n", ptr[2]);

    return 0;
}