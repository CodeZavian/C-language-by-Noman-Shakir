#include<stdio.h>
int fac(int n);     // declare 
int main()
{
        printf("fac is %d ",fac(5));   // call
        return 0;
}
 // recursion function
int fac(int n)
{
      if(n==0)
      {
             return 1;   
      }  
      int facN_minus1= fac(n-1);
             int facN = facN_minus1*n;
             return facN;
}