#include<stdio.h>
void input(int arr[],int size);
int Common(int arr[],int a[],int size);
int main()
{
    int size;
     printf("enter the size of an array\n");
     scanf("%d",&size);
     int arr[size];
     int a[size];
     input(arr,size);
     input(a,size);
     Common(arr,a,size); 
}
void input(int arr[],int size)
{
     for(int i=0;i<size;i++)
     {
                 scanf("%d",&arr[i]);    
     }
}
int Common(int arr[],int a[],int size)
{
       for(int i=0;i<size;i++)
       {    
        int count = 0;
         for(int j=0;j<size;j++)
         {
               if(arr[i]==a[j])
               {
                  count++;
               }                
         }
         if(count > 0) {
            printf("Comman array = %d ",arr[i]);
         }
       }
     

}

