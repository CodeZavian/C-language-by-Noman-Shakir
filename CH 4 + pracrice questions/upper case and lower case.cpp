#include<stdio.h>
main()
{ 
       char ch;
       printf("enter the character\n");
       scanf("%c",&ch);
    
    if (ch>='A'&&ch<='Z')
    {
       printf("upper case");
    }
    else if (ch>='a'&&ch<='z')
    {
        printf("lower case");
    }
    else 
    {
         printf("not english");
    }
    
    
}