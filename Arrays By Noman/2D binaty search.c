#include <stdio.h>

int main()
{
    int arr[][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20}};
    int rows = sizeof(arr) / sizeof(arr[0]);      // Number of rows in the 2D array
    // Since sizeof(arr[0]) represents the total size of a row, and sizeof(arr[0][0])
    // represents the size of a single element, dividing them gives the number of elements.
    int columns = sizeof(arr[0]) / sizeof(arr[0][0]);  // Number of columns in the 2D array
     int target, found = 0;
    printf("Enter the number you want to find: ");
    scanf("%d", &target);
    
    int start = 0;
    int end = rows * columns - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int row = mid / columns;  // Row index calculation
        int col = mid % columns;  // Column index calculation

        if (arr[row][col] == target)
        {
            found = 1;
            break;
        }
        else if (arr[row][col] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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

}