#include<stdio.h>
main()
{ 
     int number,largest,large;
     for (int i=1;i<=3;i++){
     	
     	 printf("enter the number\n");
     	 scanf("%d",&number);
         if(number>largest){
         	 largest = number;
		 }
		 else if(largest>number){
		 	number = largest;
		 }
	 }
	 printf("largest number is %d\n",largest);
	 printf("largest number is %d",number);
    
 
}