#include<stdio.h>
#define row 2
#define col 2
int main()
{
     int arr[row][col];
     for(int i=0;i<row;i++)
     {
         for(int j= col-1;j>=0;j--)
         {
             scanf("%d",&arr[i][j]);
         }
        // printf("\n%d \t",arr[i][i]);
         printf("\n");
     }
     printf(" no of row and colm\n");
     for(int i=0;i<row;i++)
     {
         for(int j=col-1;j>=0;j--)
         {
             printf("%d\t",arr[i][j]);
         }
          printf("\n");
     }

    int sum=0;
     for(int i=0;i<row;i++){
      printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    
    printf("\nSum of diagonal elements: %d\n", sum);

     
     }