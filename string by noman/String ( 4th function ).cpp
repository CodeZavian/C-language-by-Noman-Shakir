#include<stdio.h>
#include<string.h>
int main()
{ 
    char istStr[] = "Apple";
    char secondStr[] ="Banana";
   // printf("%d",strcmp(istStr,secondStr));  // it compare two values ur agr phali value greater ho to it
    // return positive value if it is negative then it return negative
    // if i change the position of string 
    printf("%d",strcmp(secondStr,istStr));
    return 0;
}