#include<stdio.h>
main()
{
	  char a,j,i;
	  printf("enter any number\n");
	  scanf("%c",&a);
	 
	  for(i=1;i<=a;i++){
	  	 for(j=1;j<=a;j++)
	  //	 if(i>j) dec to assen from top to bottom
	  	 if(i>j)                   // diaganol form
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
