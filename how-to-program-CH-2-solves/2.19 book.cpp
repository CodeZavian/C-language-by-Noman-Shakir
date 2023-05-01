#include<stdio.h>                
main()
{ 
               
  int a,b,c;
  int sum,average,product;
  printf("enter the values\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
 printf("sum is %d\n",a+b+c);
 printf("product is %d\n",a*b*c);
 printf("average is %d\n",(a+b+c)/2);
 if(a>b&&a>c)
 
 	{
 		 printf("%d is large no \n",a);
	 }
 
 else if(b>c&&b>a)
 
 	 {
 	 	 printf("%d is greater no \n",b);
	  }
 
 else 
 	 printf("%d is greater no\n",c);
 
 
  if(a<b&&a<c)
  
  	 {
  	 	printf("%d is less no",a);
	   }
  
  else if(b<c&&b<a)
  {
  	 printf("%d is less no",b);
  }
else {
	 printf("%d is less number",c);
}
}