#include<stdio.h>
int main()
{

// *******
// *0*0*0*
// *******
// *0*0*0*
     int number;
     printf("enter the number\n");
     scanf("%d",&number);
     
     for(int i=1;i<=number;i++)
     {
           for(int j=1;j<=number*2-1;j++)
           {
                 if(i%2!=0)
                 {
                     printf("*");
                 }
                 else{
                     if(j%2!=0)
                     {
                         printf("*")  ;
                     }
                     else{
                          printf("0");
                     }
                 }
           }
           printf("\n");
     }
}