#include<stdio.h>
int sq(int n);             // declare funtion
int cube(int n);           // declare funtion
main()
{
	   int i;
	   
	   printf("\tTABLE\t\t\n\n");
	   
	    printf("N1\tN2\tN3\tN4\n");
	    
	    for (int i=1;i<=10;i++)
	    {
	    printf("\n%d\t%d\t%d\t%d\n",i,i*i,i*i*i,i*i*i*i);    // print Table 
		         
		}
		printf("square of  any number is %d\n",sq(i));       // calling function and print square of number (n)
		printf("Cube of  any number is %d",cube(i));        // // calling function and print cube of number(n)
		 
	//	 int number;
	//	 printf("enter the number\n");
		// scanf("%d",&number);                       // user can also give number  
		 
		
		 	
}
int sq(int n)                     
{
	return n*n;        
	
}

int cube(int n)
{
	   return n*n*n;
}