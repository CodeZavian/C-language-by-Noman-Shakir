#include<stdio.h>

main()
{
	
	                                  printf("program is 3.19\n\n\n");
	 float interst,rate,days,principle;
	 printf("enter principle\n");
	 scanf("%f",&principle);
	 printf("enter rate\n");
	 scanf("%f",&rate);
	 printf("enter days\n");
	 scanf("%f",&days);
	 interst = principle*rate*(days/365);
	 printf("interst is %f",interst);
	 
}