#include<stdio.h>
int main()
{
     int n1=5,n2=10;
     int *ptr = &n1;
     int *pt = &n2;
     printf("%d + %d = %d",*ptr,*pt,*pt+*ptr);
}