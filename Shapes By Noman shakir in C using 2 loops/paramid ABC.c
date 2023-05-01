#include<stdio.h>
int main()
{
/*  A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA*/
       int number;
       printf("enter the number\n");
       scanf("%d",&number);
       // for hafl of colomob we use p
      int p = ((number*2-1)/2)+1;
      
       for(int i=1;i<=number;i++)
       {int ch = 65;
             for(int j=1;j<=number+i-1;j++)
             {
                  if(j<=number-i)
                  {
                         printf(" ");
                  }
            else{
                   if(p<=j)
                   {
                         printf("%c",ch--);
                   }
                   else{  
                    
                         printf("%c",ch++);
                   }
            }
             }
             printf("\n");
       }
}