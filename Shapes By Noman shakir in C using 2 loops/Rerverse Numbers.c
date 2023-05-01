#include<stdio.h>
int main()
{
   int number,copy=0;
   int digit;
   int reverse =0;
   printf("enter the number\n");
   scanf("%d",&number);
   copy = number;

   while(number!=0)
   {
         digit = number % 10;  // it will give you last number and store in digit
         number = number /10;  // now it will remove your last digtit and loop start again
         reverse = digit+reverse*10;// value of digit stoere in reverse
        printf("%d",digit);        
   }
   
     if(copy==reverse)
     {
          printf("\n%d is palindrome number\n",reverse);
     }
   return 0;
}


