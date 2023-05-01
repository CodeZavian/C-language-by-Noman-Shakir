#include<stdio.h>
int main()
{
      int i = 5;
      int *ptr = &i;   
      int **pptr = &ptr;    // ptr ka adress pa jo value store ha wo dega

      printf("%d",**pptr);
}