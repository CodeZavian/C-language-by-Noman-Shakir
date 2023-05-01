#include<stdio.h>
main()
{
	 int a,b,c;            // a b c are side of triangle
	 printf("enter the side of triangle\n");
	 scanf("%d%d%d",&a,&b,&c);
	 if(a+b>c&&b+c>a&&c+a>b)     // is for to check side of triangle
	 {
	 	 printf("these numbers represnt trianlge");
	 }
	 else {
	 	 printf("these numbers are not represnt trianlge");
	 }
}