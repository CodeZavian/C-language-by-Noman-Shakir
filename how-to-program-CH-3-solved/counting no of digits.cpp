#include<stdio.h>
main()
{
	 int n,counter;                  // couuntrt is for ka loop kitni bar chala ha
	 printf("enter the number\n");
	 scanf("%d",&n);
	 if(n==0)
	 {
	 	 printf("there are 1 one digits in giver number 0 ",n);
	 }
	 else {
	 	 while(n!=0)                  // expample 2002/10 =200 last wala hatata jae ga ak ak kr ke
	 {
	 	 n = n/10;
	 	 counter++;               // jitni bar loop chale ga yahan ak number add hoga
	 	 printf("ther are %d digits in given number",counter);
	 }
	 
	 
	 }
}