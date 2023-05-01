#include<stdio.h>
int main()
{
     int number = 5;
     int arr[5] = {5,3,2,4,1};
     for(int i=0;i<number;i++)
     {
         for(int j=0;j<number-1;j++)
         {
             if(arr[j]<arr[j+1])   // for assending use >
             {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                 
             }

         }
     }
     for(int i=0;i<number;i++)
     {
         printf("%d ",arr[i]);
     }
    // printf("\n");
}