#include<stdio.h>
 main()
{ 
    
     int number,largest1,largest2;
     for(int i=1;i<=3;i++)
     {
     	  printf("enter the numbers\n");
     	  scanf("%d",&number);
    	  if(number>largest1)
     	  {
     	  	  largest1 = number;
     	  	  largest2 = largest1;
     	  	  
		   }
		   if(number>largest2){
		   	
		   	    largest2 = number; }
		    }
	 printf("the two largest number are %d %d\n",largest1,largest2);
}