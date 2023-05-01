#include<stdio.h>
int main()
{
     char name[50];
     scanf("%s",name);  // address ki need nahin hoti strings mian kuin k ayhe khod ak pointre ha
     printf("your name is :  %s\n",name); 


     // now try full name
     char FullName[100];
     scanf("%s",FullName);
     printf("your full name is :  %s",FullName);  // it doesnot print space like SARDAR NOMAN 
     // it only print space se phale wala 


     return 0;

}