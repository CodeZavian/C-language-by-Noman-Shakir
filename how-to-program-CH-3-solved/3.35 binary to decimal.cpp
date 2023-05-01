#include<stdio.h>
main()
{
	 int reminder,base=1,decimal=0,binary,num;
	 printf("enter the binary number\n");
	 scanf("%d",&binary);
	 num = binary;
	 while(binary!=0)                           // number is 1001     
	 {
	 	 reminder = binary%10;                      // rem is 1 bc last digits is 1  ||  // decimal is 1
		 decimal = decimal+reminder*base ; 
		 binary = binary/10;                  //binary = 100      base 1*2 = 2
		 base  = base*2;          
		                      
	 }
	 printf("decimal number of binary number of %d : %d\n",num,decimal);
	 
}