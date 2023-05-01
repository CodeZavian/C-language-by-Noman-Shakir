#include<stdio.h>
main()
{
int sum;
/*	 for(int i=1;i<=100;i++)
	 if(i%7==0)
	 {
	 	 printf("%d ",i);
	 	 sum = sum+i;
	 	 
	 }
	 printf("\n sum is %d",sum);*/
	 
	 
for(int i=7;i<=100;i+=7)
{
	 printf("%d ",i);
	 sum = sum+i;
}
printf("\n%d is sum",sum);
}

