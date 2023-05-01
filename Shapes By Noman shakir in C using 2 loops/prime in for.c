#include<stdio.h>
int main()
{
    
    for(int i=2;i<=10000;i++)
    {
           int divisor=0;

           for(int j=2;j<=i/2;j++)
           {
              if(i%j==0)
              {
                  divisor++;
              }
           }

           if(divisor==0)
           {
              printf("%d ",i);
           }
    }
    
      /*int number;
      int divisor = 0;
      printf("enter the number\n");
      scanf("%d",&number);

      for(int i=2;i<=number/2;i++) // we will not check on 1 and itself 
      {
           if(number%i==0)
           {
              divisor++;
              break;
           }
      }
      if(divisor==0)
      {
          printf("prime no\n");
      }
      else
      {
          printf("not prime");
      }*/
}