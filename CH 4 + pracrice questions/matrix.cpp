#include<stdio.h>
main()
{
	  int i,j;
	 
	  for(i=1;i<10;i++){
	  	 for(j=1;j<10;j++)
	  //	 if(i>j) dec to assen from top to bottom
	  	 if(j>i||i>j) // diaganol form
// 1:	  if(i<j) accending to decendint top to bottom
// 2:	  if(i==0||i==9||j==0||j==9)  it print rectangle type
{
	 printf("*");  
}
 else
 {
 	  printf(" ");
 }
  printf("\n");
}

}

