#include<stdio.h>
int main()
{
     int n;
     printf("enter the number (n > 1) : ");
     scanf("%d",&n);

     int fib[n];
     fib[0]=0;   // these two are base cases 
     fib[1]=1;

     for(int i=2;i<n;i++)     // 1,2,3,5,8.........
     {
         fib[i] = fib[i-1] + fib[i-2];   // fibnoacii is sum of previcious 2 terms
         printf("%d\t",fib[i]);
     }
     printf("\n");
     return 0;
}