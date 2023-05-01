#include<stdio.h>
int fib(int n); // declare
int main()
{
      int number;
      printf("enter the seq\n");
      scanf("%d",&number);
      printf("fab seq of %d is %d ",number,fib(number));
      return 0;
}
int fib(int n) 
{
    if(n==0)    // these two are base cases  and these values are known
    {
       return 0;
    } 
    if(n==1){
      return 1;
    }  
    int fibN_minus1 = fib(n-1);     
    int fibN_minus2 = fib(n-2);
    int fibN = fibN_minus1+fibN_minus2;       //  fib = sum of previous two terms
    // printf("fab seq of %d is %d \n",n,fibN);   // it will print 1 to n fib seq
    return fibN;

}