#include<stdio.h>
#include<string.h>
int main()
{ 
    char oldStr[] ="oldstr";
    char newStr [] ="newstr";
    strcpy(newStr,oldStr);  // old ki value ko mew main copy kr di ha 
    puts(newStr);
    return 0;
}