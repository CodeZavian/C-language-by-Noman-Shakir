#include<stdio.h>
main()
{
	 float amount,interst,year;
	 printf("enter amount \n");
	 scanf("%f",&amount);
	 printf("ener interst\n");
	 scanf("%f",&interst);
	 printf("ener year");
	 scanf("%f",&year);
	 float payable = amount*interst*year;
	 payable = payable+amount;
	 printf("%f is payable amount",payable/(12.0*year));
}