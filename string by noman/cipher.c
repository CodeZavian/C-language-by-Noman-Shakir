#include<stdio.h>
#include<string.h>
int length(char ch[])
{
     int i;
    for (i = 0; ch[i] != '\0'; i++)
        ;
    return i;
}
int main()
{
     char arr[20];
     fgets(arr,20,stdin);
     int len = length(arr);

     for(int i=0;i<len;i++)
     {
         if(arr[i]>=97&&arr[i]<=122)
         {
             arr[i]+=3;
             if(arr[i]>122)
             {
                 arr[i] = 96+ arr[i] %122;
             }
         }
         else if(arr[i]>=48&&arr[i]<=57)
         {
             arr[i]+=3;
             if(arr[i]>57)
             {
                 arr[i] = arr[i]%57+47;
             }
         }
         else if(arr[i]>=65&&arr[i]<=90){
                 arr[i]+=3;
                  if(arr[i]>90){
                  arr[i]= 64+arr[i]%90;
}

         }

         
     }
     printf("%s ",arr);
    

}