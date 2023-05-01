#include<stdio.h>
int main ()
{
	 float sales,county_tax,state_tax;
	 printf("enter sales\n");
	 scanf("%f",&sales);
	 county_tax = sales*0.05;
	 state_tax = sales*0.04;
	 printf("%f is county tax and %f  is state tax \n",county_tax,state_tax);
	 printf("total tax is %f + %f = %f",county_tax,state_tax,county_tax+state_tax);
	return 0;
	 
}