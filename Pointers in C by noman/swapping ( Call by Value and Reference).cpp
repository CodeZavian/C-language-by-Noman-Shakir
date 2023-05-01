#include<stdio.h>
void swapping(int a,int b);
void _swapping(int*a,int*b);
int main()
{
     int x = 3 , y = 5;
     swapping(x,y);  // calling function
     printf("x = %d \t y = %d\n",x,y); 
     _swapping(&x,&y);
     printf("x = %d \t y = %d\n",x,y);

     return 0;
}
// function call by value   ( ur yeh main function main swapping nahin kare ga )
void swapping(int a , int b)   // value of x and y yahan a jaein gi   
{
     int t ;
     t = a ;
     a = b;
     b = t ;
     printf("a = %d \t b = %d\n",a,b);
}
// function call by Reference ( yeh function main ma bi swapping kare ga )
void _swapping(int*a,int*b)   // these are pointers *a and *b   ( we use call by ref jab humhain multiples value return krwani hun unko hum pointer ki help se return krwatee)
{
     int t ;
     t = *a;
     *a = *b;
     *b = t;
     printf("*a = %d \t *b = %d\n",*a,*b);
}
