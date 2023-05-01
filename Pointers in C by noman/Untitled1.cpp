
























/*#include<stdio.h>
int fib(int n);
int main()
{
	
        printf("%d ",fib(4));
        return 0;
}
int fib(int n)
{
        
        if(n==0)
        {
               return 0;
        }
        if(n==1)
        {
               return 1;
        }
        int fib_minus1 = fib(n-1);
        int fib_minus2 = fib(n-1);
        int fibN = fib_minus1 + fib_minus2;
        return fibN;
}*/
#include<stdio.h>
int main()
{
         int arr[10]={1,2,3};
         int *ptr;
         ptr = &arr[0];
         printf("%p = %p ",ptr,arr);

}