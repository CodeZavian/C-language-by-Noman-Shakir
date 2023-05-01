#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr;
      ptr = (int *)calloc(5,sizeof(int)); // 5 sizze ki memory ha jis ko bhad main increasw kr ke 8 kr dein ga
      
      printf("enter 5 numbers : ");
      for(int i=0;i<5;i++)
      {
          scanf("%d",&ptr[i]);
      }

     

      for(int i=0;i<8;i++)
      {
         printf("number %d = %d\n",i,ptr[i]);
      }
      return 0;

}