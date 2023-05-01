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
        int f_n1 = Calc_factorial(n1);  // calc the fac of n1 and store
        printf("fac of n1 = %d\n",f_n1);
        int f_n2 = Calc_factorial(n2);  // calc the fac of n2 and store
        printf("fac of n2 = %d\n",f_n2);
        sum = Add(f_n1,f_n2);  // sum of the fac of n1 and n2
        printf("sum  = %d\n",sum);
        factorail = Calc_factorial(sum);  
        printf("fac of %d  = %d\n",sum,factorail);  
        
        
        
        
       
        
}