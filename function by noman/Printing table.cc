#include<stdio.h>
int sum(int a,int b);
void printTable(int n);
int main()
{
         int a,b,number;
         scanf("%d%d",&a,&b);
         int s = sum(a,b);
         printf("%d is sum of a and b\n",s);
         printf("enter the number");
         scanf("%d",&number);
         printTable(number);
         return 0;

}
int sum(int a,int b)
{
       return a+b;
}
void printTable(int n)
{
         int i;
         for(i=1;i<=10;i++);
         {
              printf("%d\n",i*n);
         }
}
