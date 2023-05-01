#include<stdio.h>
int main()
{
	   int a,b,c,d,e,sum,average,product;
	   printf("\tEnter the number\n");
	   scanf("%d",&a);
	   printf("\tEnter the number\n");
	    scanf("%d",&b);
	   printf("\tEnter the number\n");
	    scanf("%d",&c);
	   printf("\tEnter the number\n");
	    scanf("%d",&d);
	   printf("\tEnter the number\n");
	    scanf("%d",&e);
	    
	    sum = a+b+c+d+e;  
	    product = a*b*c*d*e;
	    average = sum /5;
	    
	    printf("\tSum of five integer is %d\n",sum);
	    printf("\tProduct of five integer is %d\n",product);
	    printf("\tAverage of five integer is %d\n",average);
	    return 0;
}