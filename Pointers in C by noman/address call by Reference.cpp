#include<stdio.h>
void printAddress(int *n);
int main()
{
     int n=4;
     printf("%u\n",&n);
     printAddress(&n);
     return 0;
}
// call by Refernce  ( and it give same address value )  
// iske andar value same hotein hain ur hum directly address ko access krte hain
void printAddress(int *n)
{
     printf("%u\n",n);
}
