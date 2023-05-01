#include<stdio.h>
int *add(int *a,int *b)
{
     int sum = *a+*b;
     int *summ = &sum;
     return summ;
      
}
int main()
{
     int x=5;
     int y=10;
     int *sum = add(&x,&y);
     printf("%d ",*sum);
}