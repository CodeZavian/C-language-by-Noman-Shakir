#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr;
      //pointer = int type kr dein ga , point kr rha yahan 20 bytes memory ko
      ptr = (int *)malloc(5*sizeof(int));  // yeh memory run type pa allocate hovi na ka compile time pa
      ptr[0]=1;
      ptr[1]=3;
      ptr[2]=4;
      ptr[3]=6;
      ptr[4]=7;

      for(int i=0;i<5;i++)
      {
          printf("%d\n",ptr[i]);
      }
      return 0;

}