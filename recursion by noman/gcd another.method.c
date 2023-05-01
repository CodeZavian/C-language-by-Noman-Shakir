#include<stdio.h>
int gcd(int num1,int num2)
{
     if(num2==0)
     {
         return num1;
     }
     return gcd(num2,num1%num2);
}
int lcm(int num,int num2,int gcd)
{
    return (num*num2)/gcd;
      
}
int main()
{
      int num1 = 16;
      int num2 = 12;
      int GCD = gcd(num1,num2);
      printf("%d ",GCD);
      printf("%d ",lcm(num1,num2,GCD));
}