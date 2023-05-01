#include<stdio.h>
#include<stdlib.h>
int main()
{
       int *ptr;
       ptr = (int *)calloc(5,sizeof(int));

       int a,b;
       printf("enter values : \n");
       scanf("%d",&a);
       ptr[a] = a;
       scanf("%d",&b);
       ptr[b] = b;

      // printf("formula for perimeter of triangle (   ) ");
    // for example 
       printf("sum = %d\n",ptr[a]+ptr[b]);
}