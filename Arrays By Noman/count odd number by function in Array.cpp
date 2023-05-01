#include<stdio.h>
int CountOddnumber(int arr[],int n); // declare array and int n = size of array
int main()
{ 
     int arr[]= {1,2,3,4,5,6};
     printf("odd number are : %d\t",CountOddnumber(arr,6));  // 6 is the size of array
     return 0;

}
int CountOddnumber(int arr[],int n)
{
     int count = 0;
     for(int i=0;i<n;i++)   // n is size of an array 
     {
         if(arr[i] % 2 !=0) // condition for odd number
         {
             count ++;
         }
     }
     return count ;
}