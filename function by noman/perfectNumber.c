#include<stdio.h>
void PerfecNo(int num1,int num2)
{
     
       for(int i=num1;i<=num2;i++)
       {  int perfecr_no=0;
          for(int j=num1;j<i;j++)
          {
                if(i%j==0)
                {
                     perfecr_no =  perfecr_no +j;
                }
          }
          if(perfecr_no == i)
          {
              printf("%d ",perfecr_no);
          }
       }
}
int main()
{
    int number1,number2;
     printf("enter the range of number\n");
     scanf("%d%d",&number1,&number2);
     PerfecNo(number1,number2);
}