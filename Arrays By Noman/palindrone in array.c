#include<stdio.h>
void Palindrone(int arr[],int size);
int main()
{
    int arr[100];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter values in the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    Palindrone(arr,size);
    return 0;
}

void Palindrone(int arr[],int size)
{
     int isPalindrome = 1; // Assume the array is a palindrome initially

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = 0; // Array is not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
}

