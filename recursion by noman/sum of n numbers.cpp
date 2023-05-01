#include<stdio.h>
int sum(int n);     // declare 
int main()
{ 
        printf("sum is %d ",sum(5));
         return 0;
}
 // recusion function
int sum(int n)
{
       if(n==1)
       {
            return 1;
       }
       int sumNumber1= sum(n-1);     // sum of 1 to 10
       int sumN = sumNumber1+n;  
       return sumN;
}