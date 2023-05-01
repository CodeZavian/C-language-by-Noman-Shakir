#include<stdio.h>
int main()
{
      int noman_age = 18;
      int *ptr = &noman_age;

      printf("%d\n",noman_age);
      printf("%d\n",*ptr);
      printf("%d\n",*(&noman_age));
    //  printf("%p\n",ptr++);
      return 0;


}