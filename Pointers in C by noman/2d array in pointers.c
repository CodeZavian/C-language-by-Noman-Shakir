#include<stdio.h>
int main()
{
     int arr[2][2]= {{1,3},{3,4}};
     int (*ptr)[2];  // make pointer and assign collomb must
     ptr = arr;
     
      for(int i=0;i<2;i++) // row
      {
         for(int j=0;j<2;j++)  // col
         {
              printf("%d ",(*ptr)[j]);  
         }
         ptr++;
         printf("\n");
      }

}