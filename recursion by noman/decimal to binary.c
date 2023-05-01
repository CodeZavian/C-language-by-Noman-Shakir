#include<stdio.h>
void Decimal(int num);
int main()
{

    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    printf("binary form of %d = ",number);
    Decimal(number);
}
  void Decimal(int num) 
  {
    if(num==1||num==0)
    { 
      printf("%d ",num);  
      return;
    }
    Decimal(num/2); //11/2 = 1 ==> 5/2 =1 ==> 2/2 = 0
    Decimal(num%2);// 11%2 = 5 ==> 5%2 =2 ==> 2%2 = 1
    /*if (num > 1) 
     {
        Decimal(num/2);
    }
    printf("%d", num % 2);*/
}
