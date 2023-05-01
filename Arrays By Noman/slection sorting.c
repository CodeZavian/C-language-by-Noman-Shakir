#include<stdio.h>
int main()
{
     int number = 5;
     int arr[5] = {5,3,2,4,1};
     for(int i=0;i<number;i++)
     {
        int S = arr[i];
        int Si = i;
         for(int j=i+1;j<number;j++)
         {
             if(arr[j]<S)   
             {
                S = arr[j];
                Si = j; 
             }
         }
         int t = arr[Si];
         arr[Si] = arr[i];
         arr[i] = t;
     }
     for(int i=0;i<number;i++)
     {
         printf("%d ",arr[i]);
     }
    // printf("\n");
}