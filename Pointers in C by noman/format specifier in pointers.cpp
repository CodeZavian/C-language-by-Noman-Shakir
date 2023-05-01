#include<stdio.h>
int main()
{
     int age = 22;
     int *ptr = &age;
     
     // adress 
   //  printf("%p\n",&age);     // it print hexe decimal values 
     printf("%u\n",&age);     // it print decimal value but it is not good method
     printf("%u\n",ptr);      // these two have same values b/c age ka adress ptr ma chala gia ha
     printf("%u\n",&ptr);    // it give diff value
     return 0;
       
     

}