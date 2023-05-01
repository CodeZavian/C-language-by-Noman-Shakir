#include<stdio.h>
int prime(int n);
int prime(int n)
{
      if(n<0)
      {
          return 0;
      }
      for (int i = 2; i*i <=n; i++)
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
       int n1,n2;//count=0,sum=0,avg=0;
       printf("enter the number 1\n");
       scanf("%d",&n1);
       printf("enter the number 2\n");
       scanf("%d",&n2);

       for (int  i = n1; i<=n2; i++)
       {
          if (prime(i))
          {
              printf("%d\n",i);          }
       }
       return 0;
       
}