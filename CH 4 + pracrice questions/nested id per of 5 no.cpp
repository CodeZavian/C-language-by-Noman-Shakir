#include<stdio.h>
main()
{
	 int a,b,c,d,e;
	 float  per;
	 printf("enter the number\n");
	 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	 per =( (a+b+c+d+e)*100)/500;
	 printf("% ",per);
	 if(per>=50)
	 {
	 	printf("verifeid\n");
	 	
		  if(per<=70)
	 	{
	 		printf("1st");
		 }
		else 
		if(per<=90)
		 {
		 	 printf("top");
		 }
	 }
	 else{
	 	 printf("FAIL");
	 }
	 
}
