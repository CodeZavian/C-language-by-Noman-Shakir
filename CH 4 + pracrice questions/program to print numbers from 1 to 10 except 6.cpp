#include<stdio.h>
main()
{     // program to print numbers from 1 to 10 except 6
     for (int i = 1; i <=10; i++)
     {
         if(i==6)     //for skip any number 
         {
             continue;
         } 
         printf("%d\n",i);
     }
     
}
	 
