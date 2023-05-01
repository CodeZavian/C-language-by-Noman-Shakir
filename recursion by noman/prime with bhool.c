#include<stdio.h>
bool prime(int n,int i)
{
     if(i==1)
     {
         return true;
     }
     if(n%i==0)
     {
         return false;
     }
     prime(n,i-1); 
}
int main()
{
	 int num;
      printf("enter the numebr\n");
     scanf("%d",&num);
     if(prime(num,num/2))
     {
         printf("prime\n");
     }
     else {
         printf("not prime");
     }
}