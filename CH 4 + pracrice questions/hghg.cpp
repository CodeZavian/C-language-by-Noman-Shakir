#include<stdio.h>
main()
{
	 int x=0;
	 int firstnumber;
	 int secondnumber;
	 int thirdnumber;
	 printf("enter first number\n");
	 scanf("%d",&firstnumber);
	 printf("enter first number\n");
	 scanf("%d",&secondnumber);
	 printf("enter first number\n");
	 scanf("%d",&thirdnumber);
	 if(firstnumber == secondnumber&&secondnumber == thirdnumber)
	 {
	 	x=4;
	 }
	 else if(firstnumber==secondnumber)
	 {
	 	x=1;
	 }
	 else if(firstnumber==thirdnumber)
	 {
	 	 x=2;
	 }
	 else if(secondnumber==thirdnumber)
	 {
	 	x=3;
	  }
	  else {
	  	 x=0;
	  }
	  switch(x){
	  	 case 1:
	  	 	printf("first and 2nd are equal");
	  	 	break;
	  	 	case 2:
	  	 	printf("first and 3rd are equal");
	  	 	break;
	  	 	case 3:
	  	 	printf("2nd and 3rd are equal");
	  	 	break;
	  	 	case 4:
	  	 	printf("all numbers are equal");
	  	 	break;
	  	 	default:
	  	 		printf("any is not equal");
	  }
	 
}
