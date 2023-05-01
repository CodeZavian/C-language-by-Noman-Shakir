#include<stdio.h>
int main()
{
      int number;
      printf("enter the number\n");
      scanf("%d",&number);

      for(int i=1;i<=number;i++)
      {
            int k=i*2-1;

              for(int j=1;j<=number+i-1;j++)
              {
                   
                   if(j<=number-i)
                   {
                         printf("+");
                   }   
                  else{
                         printf("%d",k);
                         k--;
                  }
            

              }

              printf("\n");
      }

}