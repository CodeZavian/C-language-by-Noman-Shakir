#include<stdio.h>
main()
{
	 int a,b;
	 printf("enter the numbre\n");
	 scanf("%d%d",&a,&b);
	 if(a%b==0)
	 {
	 	 printf("%d is multiple of %d",b,a);
	 }
	 else if(b%a==0)
	 {
	 	 printf("%d is multiple of %d",a,b);
		  	 }
		  	 else {
		  	 	 printf("no one is divisible");
			   }
}