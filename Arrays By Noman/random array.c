#include<stdio.h>
#include<stdlib.h>
int main()
{
     srand(time(0));
     int arr[10];
     int n=10;
     for(int i=0;i<n;i++)
     {
          int n = rand();
          arr[i] = n;
     }
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     int number;
     printf("\nenter the number\n");
     scanf("%d",&number);

     int c=0;
     for(int i=0;i<n;i++)
     {
          if(arr[i]==number)
          {
             c++;
             break;
          }
     }
     if(c>0)
     {
         printf("%d is exits\n",number);
     }
     else 
     {
         printf("%d is not exit",number);
     }

}