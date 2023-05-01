#include<stdio.h>
#include<stdlib.h>
int main()
{
       // write a program to allocate memory to store 5 prices 
       float *ptr;
       ptr = (float *)malloc(5*sizeof(float));
      ptr[0]=1;
      ptr[1]=3;
      ptr[2]=4;
      ptr[3]=6;
      ptr[4]=7;

      for(int i=1;i<5;i++)
      {
          printf("%f\n",ptr[i]);
      }
      return 0;

}