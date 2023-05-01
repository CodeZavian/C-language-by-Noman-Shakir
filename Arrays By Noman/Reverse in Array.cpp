#include<stdio.h>
void ReverseArray(int arr[],int n); // function for reversing value of array
void PrintArray(int arr[],int n);     // for printing the value of an array 
int main()
{
     int arr[]={1,2,3,4,5};   // sixe of array is 5
     ReverseArray(arr,5);   // calling array
     PrintArray(arr,5);  // calling array for printing 

}
void PrintArray(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     printf("\n");
} 
// this is call by reference

void ReverseArray(int arr[],int n)
{
      for(int i=0;i<n/2;i++)
      {
         int firstValue = arr[i];
         int secondValue = arr[n-i-1];
         arr[i] = secondValue;
         arr[n-i-1]= firstValue;
      }
}
