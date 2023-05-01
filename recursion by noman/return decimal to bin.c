#include<stdio.h>
int dec(int n)
{
     if(n==0)
     { 
        return 0;
     }
     return (n%2)+ dec(n/2)*10;
}
int main()
{
      int num =5;
      int decimal = dec(num);
      printf("%d ",decimal);

}