#include<stdio.h>
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);

     for(int row=0;row < 2*number;row++)
     {
        int k=1;
           int totalColombInRow = row > number ? 2 * number - row : row ;

           int spaces = number - totalColombInRow ;
           for(int s = 0;s <=spaces ; s++)
           {
              printf(" ");
           }
            for(int colomb = 0; colomb < totalColombInRow ;colomb++)
            {
                  
                printf("%d ",k);
              
                k++;
            }
            printf("\n");
     }
        
     }