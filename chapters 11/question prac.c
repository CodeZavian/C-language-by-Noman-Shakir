#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
       int *ptr;
       ptr = (int *)calloc(3,sizeof(int));
       int n;
       printf("enter the number\n");
       scanf("%d",&n);
       ptr[n]=n;
       printf("cube of %d = %d",n,ptr[n]*ptr[n]*ptr[n]);

       // program for perimeter of triangle
      
}
