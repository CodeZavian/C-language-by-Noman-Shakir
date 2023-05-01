#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n, array[20];
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
    
  //initialize max and second max with the minimum possible value
  int max = INT_MIN;
  int secondmax = INT_MIN;
 // printf("%d and %d \n",max,secondmax);
    
  //Iterate through array elements
  for(int i=0; i<n; i++){
    /*
      *If element is greater than max then
      *update max with new value and secondmax with old
    */
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
  return 0;
}