#include<stdio.h>
#include<string.h>
int main()
{ 
    char istString[100] = "hello";
    char secondString[] = "word";   // insure that phali ki itni capacity honi chahie
    strcat(istString,secondString);   // it combine these two values in istString 
    // khod space print nahin kare ga jabtak hum na krain 
    puts(istString);
    return 0;
}