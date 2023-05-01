#include<stdio.h>
int main()
{
   // make string with pointer it can change the value
   char *canChange = "NOMAN SHAKER";
   puts(canChange);
   canChange = "NOMAN";   // now changw the value
   puts(canChange);
   // make string with array it cannot change the value
   // char cannotChange[]= "NOMAN SHAKER";
   // putchar(cannotChange);
   // cannotChange= "NOMAN";   // you cant modify
   // puts(cannotChange);
   
   return 0;

}