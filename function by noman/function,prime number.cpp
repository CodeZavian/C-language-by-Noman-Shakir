#include<stdio.h>
int prime(int n)
{
      for (int i = 2; i*i<=n; i++)
      {
          if (n%i==0)
          {
             return 0;
          }
          
      }
      return 1;
        
}
int main()
{
    int n1,n2,sum=0,d=0;
     double avg=0;
     printf("enter the number\n");
     scanf("%f",&n1);
     printf("enter the number\n");
     scanf("%f",&n2);
     for ( int i=n1; i <=n2; i++)
     {
         if (prime(i))                    // calling function
         {
            printf("%d\t",i);
            sum+=i;
            d++;
         }
         
     }
      avg= (double)sum / d;
    printf("Average of prime numbers between %d and %d: %lf", n1, n2, avg);
     
}