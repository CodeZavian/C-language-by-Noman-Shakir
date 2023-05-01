#include<stdio.h>
#include<stdlib.h>
int main()
{
      //allocate memoary to store 5 odd number and then reallocate and store first 6 even number 
      int *ptr;
      ptr = (int *)calloc(5,sizeof(int));
      ptr[0]=1;
      ptr[1]=3;
      ptr[2]=5;
      ptr[3]=7;
      ptr[4]=9;
      for(int i=0;i<5;i++)
      {
         printf("%d\t",ptr[i]);
      }
     // size increase ur decrease so we use Dynamically method array main hum nahin kar sakte hain
          // now reallocate the memory
      ptr = realloc(ptr,6);
      ptr[0]=2;
      ptr[1]=4;
      ptr[2]=6;
      ptr[3]=8;
      ptr[4]=10;
      ptr[5]=12;
      for(int i=0;i<6;i++)
      {
         printf("\n%d",ptr[i]);
      }
      return 0;

}