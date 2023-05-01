#include<stdio.h>
int main()
{ 
    int n=3;
    int c=0;
    int arr[3]={1,1,1};
    for(int i=0;i<n/2;i++)
    {
         if(arr[i]==arr[n-i-1])
         {
             c++;
         }
    }
    if(c==n/2)
    {
         printf("palindome \n");

    }
    else{
         printf("not plaindrome\n");
    }
}