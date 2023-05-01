#include<stdio.h>
void square(int n);
void _square(int* n);   // ak number ka pointer lia va ha is na
int main()
{
     int number = 4 ;
     square(number);
     printf("number = %d\n",number);    // it print 4
     _square(&number);  // pass address of number 
     printf("_number = %d\n",number);
     return 0;
}
// call by value 
void square(int n)
{
     n = n*n;
     printf("square = %d\n",n);  // print 16
}
// call by refernce 
void _square(int* n)
{
     *n = (*n) * (*n);   // value of address at n = value of address at n Xing value of address at n 4*4=16
     printf("_square = %d\n",*n);   // print 16
}