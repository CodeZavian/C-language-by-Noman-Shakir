#include<stdio.h>
main()
{
	  int num;
	  printf("enter the number\n");
	  scanf("%d",&num);
	  if(num>=0)
	  {
	  	 printf("positive number\n");
	  	 
	  	 if(num%2==0)
	  	 {
	  	 	printf("is even number\n");
		   }
		   else
		   {
		   	printf("is odd number");
		   }
	  }
	  else
	  {
	  	 printf("negative number");
	  }
}
