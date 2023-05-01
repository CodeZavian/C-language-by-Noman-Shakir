#include<stdio.h>
main()
{
     int range,number;
     int largest = 0;
     printf("enter the range\n");
     scanf("%d\n",&range);
     for(int i=1;i<=range;i++)
     {
          printf("enter the number");
          scanf("%d",&number);
          if(number>largest)
          {
                largest = number;
          }
          

     }
     printf("%d is largest number\n",largest);
}