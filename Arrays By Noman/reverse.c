#include<stdio.h>
int main()
{ 
     int number;
     printf("enter size of array\n");
     scanf("%d",&number);
     int arr[10];
     for(int i=0;i<number;i++)
     {
         scanf("%d",&arr[i]);
     }
     int i;
     for(i=0;i<number/2;i++)
     {
         
            int swap = arr[i]; // 1 2 3 forward
            arr[i] = arr[number-i-1] ; // 4 3 2 backword
            arr[number-i-1]=swap;
     }
    for(int i=0;i<number;i++)
    {
          printf("%d ",arr[i]);
    }
     
     
}