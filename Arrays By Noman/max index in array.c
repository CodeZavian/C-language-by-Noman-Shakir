#include<stdio.h>
int main()
{
    // program for largest number in array
    int arr[100]; // c mian size empyty nahin rahk sake 100 is max size 
    int size,i,maximum;
    printf("enter the size of an array : \n");
    scanf("%d",&size);   //we can limit the size apni marzi se
    printf("enter value in array : \n");
    for(i=0;i<size;i++)
    {
          scanf("%d",&arr[i]);  // array i mian value input lein ga hum
    }
maximum = arr[0]; // array ki zeero position wala variable hum max main store kr dein ga
  int index = 0;
   for(i=0;i<size;i++)
   {
        if(arr[i]>maximum)  

        {
             maximum = arr[i];
             index = i;  // index i ki value is mian store kr dein ga   
             // arr[i] is for element     
   }
   
}
    printf("maximum value is %d ",maximum);   
    printf("index value is %d ",index);  

}