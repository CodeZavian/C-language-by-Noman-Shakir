#include<stdio.h>
int add(int n,int m)
{
     return n+m;
}
int main()
{
     int (*ptr)(int ,int) = add;
     int result = ptr(10,12);
     printf("%d ",result);
}