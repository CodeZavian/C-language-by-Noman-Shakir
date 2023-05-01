#include<stdio.h>
main()
{
	 int number,c;
	 printf("enter the number\n");
	 scanf("%d",&number);
	 for(int i = 1 ; i<=number;i++)
	 {
	 	 if(number%i==0)
	 	 {
	 	 	 c++;
		  }
	}
if(c==2){
	 printf("%d is prime number",number);
}
else {
	printf("%d is not prime number",number);
}
	 
}