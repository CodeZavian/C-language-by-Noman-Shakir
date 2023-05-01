#include<stdio.h>
main()
{
	 int number,largest;
	 for (int i=1;i<=5;i++)
	 {
	 	printf("enter number\n");
		 scanf("%d",&number);
	 	  if(number>largest)
	 	  {
	 	  	largest = number;
		   }
	 	  
	 }
	 printf("%d is large number",largest);
}