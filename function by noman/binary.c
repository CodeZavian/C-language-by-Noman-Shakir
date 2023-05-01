#include<stdio.h>
int BinayConversion(int binary)
{
      int d=0,r=0;
     int base = 1;
     while(binary!=0)
     {
          r = binary%10;
          d = d + r*base;
          base = base*2;
          binary = binary/10;;
          
     }
     return d;
}
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);
     printf("decimal form of %d = %d\n",number,BinayConversion(number));
     
}