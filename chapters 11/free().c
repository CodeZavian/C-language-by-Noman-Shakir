// write a program  to allocate memory of size where n is enter by user 
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr;
      int number;
      printf("enter the number : \n");
      scanf("%d",&number);
    
    ptr = (int *)calloc(number,sizeof(int));  // har ak ka andat 0 store hoga 
    for(int i=0;i<number;i++)
    {
          printf("%d\n",ptr[i]);
    }
    free(ptr);  // yhan isko free kr dia ha 
    ptr = (int *)calloc(2,sizeof(int));  //ab pointer ko access kr rahe 2 size ki value ko
    for(int i=0;i<2;i++)
    {
          printf("%d\n",ptr[i]);
    }

}