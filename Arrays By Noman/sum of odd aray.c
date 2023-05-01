#include<stdio.h>
int SumOfOdd(int arr[],int sizee);
int main()
{
    // program for largest number in array
    int arr[100]; // c mian size empyty nahin rahk sake 100 is max size 
    int size,i;
    printf("enter the size of an array : \n");
    scanf("%d",&size);   //we can limit the size apni marzi se
    printf("enter value in array : \n");
    for(i=0;i<size;i++)
    {
          scanf("%d",&arr[i]);  // array i mian value input lein ga hum
    }
    int SUM = SumOfOdd(arr,size);
   printf("sum of odd array = %d\n",SUM);// calling the funtion 
}
int SumOfOdd(int arr[],int sizee)
{
    int sum=0;
     for(int i=0;i<sizee;i++)
     {
          if(arr[i]%2!=0)
          {
             sum = sum+arr[i];
          }
     }
     return sum;
       
}

