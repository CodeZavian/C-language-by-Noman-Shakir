#include<stdio.h>
int add(int a,int b);
int Sub(int a,int b);
int multi(int a,int b);
float divi(int a,int b);
int main()
{
      int n1,n2;
       int  choice;
       printf("enter the two numbers:\n");
       scanf("%d%d",&n1,&n2);
       printf("enter your choice\n 1 for sum\n 2 for subtract\n 3 for multi\n 4 for divide\n");
       scanf("%d",&choice);
       switch (choice)
       {
          case 1:
          add(n1,n2);
          printf(" %d + %d = %d\n",n1,n2,add(n1,n2));
          break;
          case 2:
          Sub(n1,n2);
          printf("subtraction of %d and %d = %d\n",n1,n2,Sub(n1,n2));
          break;
          case 3:
          multi(n1,n2);
          printf("multiplication of %d and %d = %d\n",n1,n2,multi(n1,n2));
          break;
          case 4:
          divi(n1,n2);
          printf("division if %d and %d = %.1f",n1,n2,divi(n1,n2));
          break;
          default:
          printf("dont do anything\n");
          break;
       }
       
}
int add(int a,int b)
{
     return a+b;
}
int Sub(int a,int b)
{
     return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
float divi(int a,int b)
{
    return a/b;
}