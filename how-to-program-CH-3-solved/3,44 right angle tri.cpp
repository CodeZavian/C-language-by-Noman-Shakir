#include<stdio.h>
#include<math.h>
main()
{
	 int a,b,c;
	 printf("enter the number\n");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
	 {
	 	 printf("these numbers represnt the right angle triangle\n");
	 }
	 else {
	 	printf("these numbers is not represent the right angle triangle\n");
	 }
}