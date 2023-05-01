#include<stdio.h>
int main()
{
      int arr[5];  // delare array of max size 1000
      int element,i,size;
      printf("enter the size of an array \n");
      scanf("%d",&size);

      // now we use for loop
      for(i=0;i<size;i++)
      {
          scanf("%d",&arr[i]);   // input in array 
      }
      printf("insert element in array \n");  // end mian ak element enter krain ga 
      scanf("%d",&element);
                            // now increase the size 
       size = size + 1;
       arr[size-1]=element;   // idr element ko in input krain ga kuin ka yeh 0 se start hokar n tak jaata ha
    
      printf("After insert the element in array : \n");
      for(i=0;i<size;i++)
      {
            printf("%d ",arr[i]);
      }


}