#include<stdio.h>
int main()
{
     int arr[]={1,2,3,4,5,6,7,8,9,10};
     int size  = sizeof(arr)/sizeof(arr[0]);
     int t=7,start=0,end=size-1,count=0;

     while(start<=end)
     {
        int mid = (start+end)/2;  // mid =5
        if(arr[mid]==t)
        {
             count++;
             break;
        }
        else if(arr[mid]>t)
        {
             end  = mid-1;
             
        }
        else 
        {
             start = mid+1;
        }

          
     }
     if(count==1)
     {
         printf("found");
     }
     else{
         printf("not found")
     }
     
}