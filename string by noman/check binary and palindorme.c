#include <stdio.h>

int binary(int num)
{
    int r = 0;
    int base = 1;
    int bin = 0;
    int index = 0;
    int binaryArr[32]; // Assuming an integer can be represented in 32 bits (adjust accordingly)
    
    while (num != 0)
    {
        r = num % 2;
        bin = bin + r * base;
        num = num / 2;
        binaryArr[index++] = r;
    }
    
    return index; // Return the size of the binaryArr
}

int main()
{
    int number = 5;
    int arr[32]; // Assuming an integer can be represented in 32 bits (adjust accordingly)
    int size = binary(number);
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = binary(number);
    }

    int c = 0;
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] == arr[size - i - 1])
        {
            c++;
        }
    }
    
    if (c == size / 2)
    {
        printf("Binary representation of %d is a palindrome.", number);
    }
    else
    {
        printf("Binary representation of %d is not a palindrome.", number);
    }

    return 0;
}
