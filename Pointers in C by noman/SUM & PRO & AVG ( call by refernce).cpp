#include<stdio.h>
void DoWork(int a,int b,int *sum,int *product , int *average);
int main()
{
      int x = 5 , y = 5;
      int sum , product , average;
      DoWork(x,y,&sum,&product,&average);
      printf("sum is %d\nproduct is %d\naverage is %d\n",sum,product,average);
      return 0;
}
// call by reference + call by call to a and b
void DoWork(int a,int b,int *sum,int *product , int *average)
{
     *sum = a+b;
     *product = a*b;
     *average = (a+b)/2;
}