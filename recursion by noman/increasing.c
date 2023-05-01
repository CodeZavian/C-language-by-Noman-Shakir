#include<stdio.h>
void increasing(int x,int n);
int main()
{
     int n;
     scanf("%d",&n);
      printf("\n\n");   // we use an extra paramemter
     increasing(1,n);
}
void increasing(int x,int n)
{
    if(x>n)
    {
         return ;
    }
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}