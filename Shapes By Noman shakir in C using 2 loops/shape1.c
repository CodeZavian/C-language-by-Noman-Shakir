#include<stdio.h>
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);

     for(int row=0;row < 2*number;row++)
     {
           int totalColombInRow = row > number ? 2 * number - row : row ;
            for(int colomb = 0; colomb < totalColombInRow ;colomb++)
            {
                  
                    printf("*");
            }
            printf("\n");
     }
        
     }