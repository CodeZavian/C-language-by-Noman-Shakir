#include<stdio.h>
void prime(int n);
void even(int n);
main()
{
    int number;
     printf("enter the number");
     scanf("%d",&number);
     prime(number);
     even(number);
}
void prime(int n)
{
    int c=0;
      for (int i = 1; i <=n; i++)
      {
           if (n%i==0)
           {
               c++;
           }
      }
      if (c==2)
      {
       printf("prime number\n");
      }
      else 
      { 
         printf("not prime numebr");
      }
      
}
void even(int n)
{
     if (n%2==0)
     {
        printf("even number\n");
     }
     else {
         printf("odd\n");
     }
     
}