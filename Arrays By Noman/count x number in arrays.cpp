#include<stdio.h>
int main()
{
     int arr[10];
     int number,count=0;
     printf("enter the element  of an array:\n");
     for(int i=0;i<10;i++)
     {
        scanf("%d",&arr[i]);    // input an array 
     }
          
     
     printf("enter the number (X) you want to count\n");
     scanf("%d",&number);

     for(int i=0;i<10;i++)
     {
            if(arr[i]==number)    // agr kio array ka element equal a jae jo number hum enter kr rahe count main ak add kr lo 
            {
                count++;
            }
     }
     printf("count is %d",count);
     return 0;
}