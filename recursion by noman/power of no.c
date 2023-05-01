#include<stdio.h>
int Power(int bas,int pow);
int main()
{
    int base,power;
    printf("enter the base\n");
    scanf("%d",&base);
    printf("enter the power\n");
    scanf("%d",&power);
    printf("result = %d\n",Power(base,power));
    return 0;
}
int Power(int bas,int pow)
{
      
        if(pow==0)
        {
             return 1;
        }
        else {
            return bas*Power(bas,pow-1); 
        }
}