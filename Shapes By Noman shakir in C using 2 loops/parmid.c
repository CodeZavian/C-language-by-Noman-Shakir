#include<stdio.h>
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);

      for(int row = 1;row<=number;row++)
      {
            
            for(int s = 0 ; s<= number-row;s++)
            {
                 printf("  ");
            }

            for(int col = row ; col >= 1 ;col--)
            {
                 printf("%d ",col);
            }

            for(int col = 2 ; col <= row ;col++)
            {
                printf("%d ",col);
            }
            printf("\n");

      }
        
     } 
   