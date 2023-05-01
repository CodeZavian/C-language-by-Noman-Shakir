#include<stdio.h>
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);

     for(int i=1;i<=number;i++)

     {
          for(int j=1;j<=number;j++)
          {
             if(j==i||j==number-i+1)    // also j==number-i+1 OR i+j==number+1 both are sahi
             {
                  printf("*");
             }
             else
             {
                  printf(" ");
             }
          }
          printf("\n");
     }
}