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

}