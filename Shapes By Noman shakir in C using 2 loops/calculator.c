#include<stdio.h>
#include<conio.h>
int main()
{
    int result = 0;
    char ch,sign;
    int num=0;
    int count=0;

    while(1)  // jitmi marzi bar chalou loop
    {
         ch = getche(); // input from user
         if(ch>=48&&ch<=57)  // OR u ca+n use (ch>='0'&&ch<='9')
         {
              num = num*10+(ch-48);
         }
    
    else {
        if(count==0){
          
           result = num;
           num=0;
           count++;
           sign=ch;
    }
    else{
         switch(sign)
         {
              case'+':
              result +=num;
              break;
              case '-':
              result-=num;
              break;
              case '*':
              result*=num;
              break;
              case '/':
              result/=num;
              break;
         }
         num=0;
              sign=ch;
    }
    if(sign =='=')
    {
      printf("%d ",result);
      break;
    }
    
    }
    }
    return 0;
}