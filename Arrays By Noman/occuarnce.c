#include<stdio.h>
int main()
{
     int arr[7]={2,7,9,3,2,6,9};

     for(int i=0;i<6;i++)
     { int c=0;
       if(arr[i]==-1)
       {
         continue;
       }
          for(int j=0;j<6;j++)
          {
            
               if(arr[i]==arr[j])
               {
                   c++;
                   if(j>i)
                   {
                        arr[j]=-1;
                   }
               }
          }
          printf("%d occ %d times\n",arr[i],c);
     }
}