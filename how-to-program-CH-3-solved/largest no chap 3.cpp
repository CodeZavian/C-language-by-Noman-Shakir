#include<stdio.h>
main()
{
   int number,largest;
   for ( int i = 1; i <=10; i++)
   {
        printf("enter the number\n");
        scanf("%d",&number);
        if (number>largest)
        {
             largest =  number;

        }
        

   }
   printf("the largest number is %d ",largest);
}