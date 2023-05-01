#include<stdio.h>
int fac(int n);
int main()
{
   printf("%d ",fac(2));
   return 0;
     
}
int fac(int n)
{
     int FAC;
     if(n==1)
     {
         return 1;
     }
     else {
        FAC = n*fac(n-1); // calling again annd again till 1
        return FAC;
     }

}