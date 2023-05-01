#include<stdio.h>
main()
{
	 int number,totalnumber,average;
	 	 int sum=0;
	 	 
	 	 printf("enter the numbers\n");
	 	 scanf("%d",&totalnumber);
	 	 for (int i=1;i<=totalnumber;i++)
	 	 {
	 	 	 scanf("%d",&number);
	 	 	 sum =sum+number;
		  }
	 	 average = sum /totalnumber;
	 	 printf("%d is average %d is the sum",average,sum);
}
