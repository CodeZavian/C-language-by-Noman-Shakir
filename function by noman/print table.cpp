#include<stdio.h>
int sq(int n);
int cube(int n);
main()
{
     printf("N1\tN2\tN3\tN4");
      for (int i = 1; i <=10; i++)
      {
         printf("\n%d\t%d\t%d\t%d",i,sq(i),cube(i),sq(i)*sq(i));
      }
      
}
int sq(int n)
{
      return n*n;
}
int cube(int n)
{
      return n*n*n;
}