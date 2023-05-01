 // now for the factorial 
 
#include<stdio.h>
main()
{
	 int i,num,fac=1;
	 printf("enter the number\n");
	 scanf("%d",&num);
	 
	 for(i=1;i<=num;i++)
	fac = fac*i; 
	
	 printf("the factoral of\t%d : %d ",num,fac);
}

