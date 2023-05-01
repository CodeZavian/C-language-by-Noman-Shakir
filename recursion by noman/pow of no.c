#include<stdio.h>
int pow(int num,int c)
{
      if(c==1)
      {
         return num;
      }
     return num * pow(num,c-1); 
}
int main()
{
     int num = 4;
     int c = 3;
     int p = pow(num,c);
     printf("%d ",p);
}