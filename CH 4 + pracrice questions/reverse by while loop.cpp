#include<stdio.h>
main()
{
       int digit,number;
       printf("enter the number\n");
       scanf("%d",&number);

      while(number>0)
      {
            digit=number%10;      // give the last number and store  (e,g number = 123 )  it give 3
            number=number/10;       // remove the last digits from the number and give (12)
            printf("%d",digit);
      }
       



}