#include<stdio.h>
int main()
{
       char str[100] = "hello world";
       int i = 0;
       printf("orginal string is : %s\n",str);
       while(str[i])
       {
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
           {
                 str[i] = str[i] - 32;/*This line of code str[i] = str[i] - 32 is an alternative way to
                  convert a lowercase letter to an uppercase letter in ASCII representation. The ASCII 
                  codes for lowercase and uppercase letters have a difference of 32, so subtracting 32 
                  from the ASCII code of a lowercase letter will give its corresponding uppercase letter.*/
           }
           i++;
       }
       printf("Converted string is : %s",str);
       return 0;
}