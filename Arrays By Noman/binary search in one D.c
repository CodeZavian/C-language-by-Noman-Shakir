#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d ",size);
    int target, start = 0, end = size - 1, found = 0;
    
    printf("Enter the number you want to find: ");
    scanf("%d", &target);

    while (start <= end)
    { 
        int mid = (start + end) / 2;
        
        if (arr[mid] == target)
        {
            found = 1;
            break;
        }
        else if (target>arr[mid])
        {
            
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found == 1)
    {
        printf("%d is found.\n", target);
    }
    else
    {
        printf("%d is not found.\n", target);
    }

    return 0;
}
