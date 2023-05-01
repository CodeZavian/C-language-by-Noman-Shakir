
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Point to the first element of the array

    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Dereference the pointer to access array elements
    }
    printf("\n");

    // Perform pointer arithmetic
    ptr++; // Move the pointer to the next element in the array
    printf("After ptr++: %p\n", *ptr);

    ptr += 2; // Move the pointer two elements ahead in the array
    printf("After ptr += 2: %d\n", *ptr);

    ptr--; // Move the pointer one element back in the array
    printf("After ptr--: %d\n", *ptr);

    ptr -= 2; // Move the pointer two elements back in the array
    printf("After ptr -= 2: %d\n", *ptr);

    return 0;
}

