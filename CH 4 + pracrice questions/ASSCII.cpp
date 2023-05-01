#include<stdio.h>
main()
{
	 int a,b,c;
	 printf("enter the number");
	 scanf("%d",&a);
	 printf("enter the number");
	 scanf("%d",&b);
	 printf("enter the number");
	 scanf("%d",&c);
	 if(a==b&&b!=c){
	 	 printf("a and b are equal");
	 }
	 else if(b==c&&c!=a)
{
	 printf("b and c are equal");
}
else if(a==b&&b==c)
{
	 printf("all values are equal");
}
else {
	printf("no values are equal");
	}

	
}
