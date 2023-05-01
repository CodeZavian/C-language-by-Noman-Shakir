#include<stdio.h>
void printNumber(int *arr,int n);   // dealare  array function and N , n is the size
int main()
{
     int arr[]={1,2,3,4,5,6} ;// declare array and intialization 
     printNumber(arr, 6);
     return 0;
}
void printNumber(int *arr,int n)     // we aslo use pointer *arr OR arr[]
{
     for(int i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
     printf("\n");
}