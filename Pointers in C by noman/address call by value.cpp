#include<stdio.h>
void printAddress(int n);
int main()
{
     int n=4;
   //  printf("address of n is %p\n",&n);  irt give HEXA D so we use %u that for unsinged value
     printf("address of n is %u\n",&n);
     printAddress(n);
     return 0;
}
// call by value     it give diif value of address 
// call by value mian jahan address alag alag hain ur hamari values copy hotein hain 
void printAddress(int n)
{
     printf("address of n is %u\n",&n);
}
