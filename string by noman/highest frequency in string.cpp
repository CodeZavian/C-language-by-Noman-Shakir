#include<stdio.h>
int main()
{ 
       char str[100];
       char ch;
       int count = 0;
       fgets(str,100,stdin); // input
       for(int ch='a';ch<='z';ch++)   // a se z tak chale ga yeh sab
       {
             count = 0;
             for(int i=0;str[i]!=NULL;i++)    // i chale ga jab tab null charac na aie 
             {
                 if(ch==str[i])   
                 count++;
             }
             if(count>0)  // jo found nahin hoga wo print hoga
             {
                 printf("%c found in %d times\n",ch,count);
             }
 
       }
}