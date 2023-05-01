#include<stdio.h>
int Gcd(int num1,int num2);
int main()
{
      int number1,number2,gcd;
      printf("Enter two numbers\n");
      scanf("%d%d",&number1,&number2);
      gcd = Gcd(number1,number2);
      printf("HCF of %d and %d = %d",number1,number2,gcd);
}
int Gcd(int num1,int num2)
{
   if(num1==0){
     return num2;
   }
   if(num2==0)
   {
     return num1;
   }
   if(num1>num2)
   {
       return Gcd(num1%num2,num2);
   }
   else {
    return Gcd(num1,num2%num1);
   }   
}