#include<stdio.h>
main()
{
	int marks,attendence;
 printf("enter the marks\n");
 scanf("%d",&marks);
 printf("enter the attendence\n");
  scanf("%d",&attendence);
  if(marks>=200)
  { 
     if(attendence>=20)
     {
     	 printf("pass");
	 }
	 else {
	 printf("low atten");	
	 }
}
else {
	printf("fail");
}
 } 

 