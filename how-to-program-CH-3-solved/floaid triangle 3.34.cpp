
#include<stdio.h>
main()
{
	 int n=1,row;
	 printf("enter the number of rows\n");
	 scanf("%d",&row);
	 for(int i=1;i<=row;i++)
	 {
	 	 for(int j=row;j>=i;j--)
	 	 {
	 	 	 printf("%d ",n);
	 	 	 n++;
		  }
		  printf("\n");
	 }
	 
}