#include<stdio.h>
int main()
{
     int aadhar[5]; // deacalare an array 
     
     // input with the help of pointer
     int *ptr =&aadhar[0];  // pointer point on 1st memory location
     for(int i=0;i<5;i++)  // i 0 index se 5 index tak ja rha and 0 is base index in array
     {
         printf("%d index : ",i); 
       //  scanf("%d",(ptr+i)); // pointer se bi kr sakte
         // OR 
         scanf("%d",&aadhar[i]); // array se bi kr sakte
         // pointer main addition krain ga to yeh apni position change krta rahe ga
         // +1 se first position +2 se 2nd ........ 
         // we also use aadhar[i] OR (ptr+i)
     }
     // out put 
     for(int i=0;i<5;i++)
     {
       //  printf("%d index = %d\n",i,*(ptr+i)); 
         // OR 
        printf("%d index = %d\n",i,aadhar[i]); 
         // phale index print krain ga phir value krian ga 
     }

}