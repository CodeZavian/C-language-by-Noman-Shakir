#include<stdio.h>
int main()
{
     int number;
     printf("enter the number\n");
     scanf("%d",&number);  
     int p = ((number*2-1)/2)+1;
     int l=0;
     for(int i=number;i>=1;i--)
     {      int k = number - l;
           for(int j=1;j<=number+i-1;j++)  // loop chale ga 5,6,7,8,9
           {
              if(j<=number-i)
              {
                    printf(" ");
              }
              else {
                   if(p<=j)   // half tak cahle ga 
                   {
                          printf("%d",k);
                          k--;
                   }
                   else{
                         printf("%d",k);
                         k++;
                   }
                   
              }
           }
           printf("\n");
           l++;
     }
}