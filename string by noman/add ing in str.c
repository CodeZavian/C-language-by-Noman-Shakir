/*3.	Write a C program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged.
Sample String : 'abc'
Expected Result : 'abcing'
Sample String : 'string'
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter string name \n");
    fgets(str,100,stdin);
    int length = strlen(str);
    printf("%d \n",length-1);
    
}