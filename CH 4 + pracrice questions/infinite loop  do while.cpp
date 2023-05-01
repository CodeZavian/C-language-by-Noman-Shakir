#include<stdio.h>
main()
{  
     int number;
     do{
     	 printf("enter number\n");
         scanf("%d",&number);
         printf("number is %d\n",number);
         
         if(number%2!=0)
         {
         	 break;
		 }
     }
	 while(1);                    //1 is always true this loop doesnot stop becaude it is infinite loop
	 printf("thnaks you\n");            
}
	 

	             
	       