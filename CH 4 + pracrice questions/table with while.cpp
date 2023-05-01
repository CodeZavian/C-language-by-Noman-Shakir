#include<stdio.h>
main()
{
	 int i=2;
	 while(i<=10)
	 {
	 	 printf("table of %d\n",i);
	 	 int j=1;
	 	 while(j<=10){
	 	 	printf("%d x %d = %d",i,j,i*j);
	 	 printf("\n");
	 	 j++;
		  }
	 	 
	 i++;	 
	 }
	 
}

