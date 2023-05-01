#include<stdio.h>


int main()

{
     char str[100];  // declare a string   max size 100 ha 
     char ch; // declare a charac jo hum bar bar input lein ga
     int i=0; // jo track kare ga index ko

     while(ch != '\n')  // jab tak charac new line ka equal na aie mean till we wont press enter
     {
       scanf("%c",&ch);
           str[i]  = ch; // ak ak character ko string main store kra dein ga
           i++;
     }
     str[i]='\0'; // ab  yahan pa null charac comliper khod nahin dale ga kuin ka c use howa ha
     puts(str);  // print whole string 
}