#include<stdio.h>
void input(int arr[],int size);
void Differnt_arr(int arr[],int arr2[],int size);
void input(int arr[],int size)
{
      for(int i=0;i<size;i++)
      {
          scanf("%d",&arr[i]);
      }
}
void Differnt_arr(int arr[],int arr2[],int size)
{
          for(int i=0;i<size;i++)
          {
            int c=0;
              for(int j=0;j<size;j++)
              {
                  if(arr[i]==arr2[j])
                  {
                     c++;
                  }
              }
              if(c==0)
              {
                   printf("diff arrays %d\n",arr[i]);
              }
          }
     
}
int main()
{ 

     int size;
     printf("enter the size of aray\n");
     scanf("%d",&size);
     int arr[size];
     int arr2[size];
     input(arr,size);
     input(arr2,size);
     Differnt_arr(arr,arr2,size);
}