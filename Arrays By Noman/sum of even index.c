#include<stdio.h>

int SumEvenIndexes(int arr[], int size);

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

    int sum = SumEvenIndexes(arr, size);
    printf("Sum of numbers at even indexes = %d\n", sum);

    return 0;
}

int SumEvenIndexes(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i+=2)
    {
        sum += arr[i];
    }
    return sum;
}
