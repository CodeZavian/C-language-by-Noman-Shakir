#include<stdio.h>
main()         // power of e (something)
{ 
   float power;
   printf("enter the number\n");
   scanf("%f",&power);
   int accuracy=100;
   float answer=1;
   float temp=1;
   for(int i=1;i<=accuracy;i++)
   {
   	temp = (temp*power)/i;
   answer = answer+temp;
   }
   printf("%f",answer);
}