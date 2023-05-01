#include<stdio.h>
int Add(int a,int b); // decalare funtion
int Calc_factorial(int fac);  // decalare funtion
int Add(int a,int b)  // define function
{
       return a+b;
}
int Calc_factorial(int n)
{   
      int f = 1;
      for(int i=n;i>=1;i--)
      {
           f = f*i;
      }
      return f;
      
}
int main()
{
        int n1,n2,sum,factorail;
        printf("enter the number\n");
        scanf("%d %d",&n1,&n2);
        sum = Add(n1,n2);  // call the sum that return sum of no and store this value in sum
        printf("sum = %d\n",sum);
        factorail = Calc_factorial(sum);   // calling function that calcualte the fac and return value to the variavle name factorail
        printf("fac = %d\n",factorail);
        
}