#include<stdio.h>
void input(int arr[],int size)
{
      for(int i=0;i<size;i++)
      {
          scanf("%d",&arr[i]);
      }
      printf("\n");
}
void output(int arr[],int size)
{
      for(int i=0;i<size;i++)
      {
          printf("%d",arr[i]);
      }
      printf("\n");
}
int main()
{
     int arr[20];
     int size=5;
     input(arr,size);
     output(arr,size);
     int temp;
     for(int i=0;i<size;i++)
     {
         for(int j=0;j<size-i-1;j++)
         {
             if(arr[j]>arr[j+1])
            {
                  temp = arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
            }
         }
     }
     printf("%d",arr[size-2]);
    
}